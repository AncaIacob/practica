  
#ifndef Queue_HPP
#define Queue_HPP
#include <cstddef>
#include <cstdlib>

template<typename T,typename Tcontainer>
class Queue
{  using TIterator = typename TContainer::TIterator;

    public:
    Queue();
    Queue(const Queue&rhs);
    ~Queue()
    Queue<T,TContainer>& operator=(const Queue& rhs);
    template <typename U, template <typename> typename UTContainer>
    friend std::ostream& operator<<(std::ostream& os, const Queue<U,UTContainer>& myq);
    size_t getSize();
    void push(T element);
    T pop(T element);
    void clear();
    bool isEmpty();
    TIterator begin();
    TIterator end();
    private:
    Tcontainer m_container;
};