#include "SynchronizedPriorityQueue.hpp"
#include "Vector.hpp"
#include "TaskScheduler.hpp"
#include "TaskArgument.hpp"
#include "TaskResult.hpp"
#include "Task.hpp"
#include <iostream>
#include <future>
#include <thread>
#include <atomic>

 TaskScheduler::TaskScheduler(size_t count)
 {
       m_stop = false;
        for (std::idx = 0; idx < count; ++idx)
        {
            m_threads.pushBack(std::thread(&TaskScheduler::processTask, this));
        }
 }

 TaskScheduler::~TaskScheduler()
 { m_stop = true;
        for (thread& t : m_threads)
        {
            t.join();
        }
 }

 std::future<TaskResult> TaskScheduler::schedule(TaskArgument arg, int64_t prio)
 {
     auto lambda = [arg]() {
            TaskResult a;
            a.sum = arg.a + arg.b;
            return a;
        };
        Task task(prio, lambda);
        std::packaged_task<TaskResult()> packedTask(Task);
        std::future<TaskResult> futureResult = packedTask.get_future();
        m_tasks.push(std::move(packedTask));
        packedTask(arg);
        return futureResult;

 }

 void TaskScheduler::stop()
 {
       m_stop=true;
    
 }
 void processTasks()
 {
     
         while (!m_stop = false)
        {
            std::packaged_task<TaskResult(TaskArgument)> task;
            if (m_tasks.tryPop(task))
            {
                task();
            }
        }
    
    
 }