#ifndef SYNCHRONIZEDPRIORITYQUEUE_HPP
#define SYNCHRONIZEDPRIORITYQUEUE_HPP

#include <cstddef>
#include <iostream>
#include <mutex>
#include "List.hpp"
template <typename T, template <typename> typename TContainer = List, typename TLock = std::mutex>
class SynchronizedPriorityQueue
{
public:
    SynchronizedPriorityQueue();
    SynchronizedPriorityQueue(const SynchronizedPriorityQueue& rhs);
    ~SynchronizedPriorityQueue();

    SynchronizedPriorityQueue<T,TContainer,TLock>& operator=(const SynchronizedPriorityQueue& rhs);

    size_t getSize();

    void push(T& element);
    void push(T&& element);
    
    T pop();
    bool tryPop(T& value);

    void clear();
    bool empty();

    template <typename U, template <typename> typename UTContainer, typename UTLock>
    friend std::ostream& operator<<(std::ostream& os, const SynchronizedPriorityQueue<U,UTContainer, UTLock>& pq);

    typename TContainer<T>::TIterator begin();
    typename TContainer<T>::TIterator end();

private:

    TContainer<T> m_container;
    TLock m_lock;
};

#include "SynchronizedPriorityQueue.hpp"

#endif /* SYNCHRONIZEDPRIORITYQUEUE_HPP */
