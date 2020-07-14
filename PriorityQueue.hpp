#ifndef PriorityQueue_HPP
#define PriorityQueue_HPP
#include <cstddef>
template <typename T, template <typename> typename TContainer>
class PriorityQueue
{
    public:
    PriorityQueue();
    PriorityQueue(const PriorityQueue& rhs);
    ~PriorityQueue();
    PriorityQueue<T,TContainer>& operator=(const PriorityQueue& rhs);
    size_t getSize();
    void push(T element);
    T pop(T element);
    void clear();
    bool empty();
    friend std::ostream& operator<<(std::ostream& os, const PriorityQueue<U,UTContainer>& prioq);
    
    private:
    TContainer m_container;
};
#include "PriorityQueue.hpp"
#endif