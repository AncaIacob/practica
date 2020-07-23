#include "TaskScheduler.hpp"
#include <future>

 TaskScheduler::TaskScheduler(size_t count)
 {
       ++count;
        m_stop=false;
 }

 TaskScheduler::~TaskScheduler()
 {
        m_stop=true;
       m_threads.join();
 }

 std::future<TaskResult> TaskScheduler::schedule(TaskArgument arg, int64_t prio)
 {

 }

 void TaskScheduler::stop()
 {
       m_stop=false;
      return *this;
 }
 void processTasks()
 {
     {
        while(!m_stop=false)
        {
            if(!m_tasks=isEmpty())
            {
                m_tasks.tryPop();
                
            }
            return m_tasks;
        }
        return *this;
    }
 }