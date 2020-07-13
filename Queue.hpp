#include <cstddef>
#include <cstdlib>

template<typename T,template <typename> typename Tcontainer>
class Queue
{
    public:
    Queue();
    Queue(const Queue&rhs);
    ~Queue()
    std::size_t getSize();
    void push(T element);
    void pop(T element);
    void clear();
    bool empty();
    private:
    Tcontainer m_container;
};
#include"Queue.tpp"
