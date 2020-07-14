  
#ifndef Queque_HPP
#define Queque_HPP
#include <cstddef>
#include <cstdlib>

template<typename T,template <typename> typename Tcontainer>
class Queue
{
    public:
    Queue();
    Queue(const Queue&rhs);
    ~Queue()
    Queue<T,TContainer>& operator=(const Queue& rhs);
    template <typename U, template <typename> typename UTContainer>
    friend std::ostream& operator<<(std::ostream& os, const Queue<U,UTContainer>& myq);
    std::size_t getSize();
    void push(T element);
    void pop(T element);
    void clear();
    bool empty();
    private:
    Tcontainer m_container;
};
#endif
#include "Queque.tpp"