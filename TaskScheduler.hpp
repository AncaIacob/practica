#ifndef TASKSCHEDULER_HPP
#define TASKSCHEDULER_HPP
#include "SynchronizedPriorityQueue.hpp"
#include "Task.hpp"
#include <iostream>
#include <future>
#include <thread>
#include <atomic>

class TaskScheduler
{
public:
    TaskScheduler(std::size_t count);
    ~TaskScheduler();

    std::future<TaskResult> schedule(TaskArgument arg, int64_t prio);
    void stop();


private:
   SynchronizedPriorityQueue<packaged_task<Task>> m_tasks;
    Vector<thread> m_threads;
    std::atomic<bool> m_stop;

    void processTasks();
};

#endif