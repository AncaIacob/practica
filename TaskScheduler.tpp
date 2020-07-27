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
        for (std::size_t idx = 0; idx < count; ++idx)
        {
            m_thread.pushBack(std::thread(&TaskScheduler::processTasks, this));
        }
 }

 TaskScheduler::~TaskScheduler()
 {
        m_stop = true;
        for (std::thread& t : m_thread)
        {
            t.join();
        }
 }

 std::future<TaskResult> TaskScheduler::schedule(TaskArgument arg, int64_t prio)
 {

 }

 void TaskScheduler::stop()
 {
       m_stop=true;
    
 }
 void processTasks()
 {
     
        while(!m_stop)
        {
        Task<void()>task;
        
            if(m.tasks.tryPop(task))
            {
                task();
                
            }
        
        }
    
    
 }