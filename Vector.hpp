
#include<cstddef>
#include <cstdlib>

template <typename T>
class Vector
{
    public :
        

     Vector(const Vector& rhs);
     
     Vector(std::size_t capacity);
    ~Vector();
     std::size_t getSize();
     std::size_t getCapacity();
    void insert(std::size_t idx,T element);
    void pushFront(T element);
    void pushBack(T element);
    Tvalue getElement(std::size_t idx);
    Tvalue getFront();
    Tvalue getBack();
    void setElement(std::size_t idx, T element);
    void setFront(T element);
    void setBack(T element);
    void clear();
    bool empty();
    

    private :
    std::size_t m_size;
    std::size_t m_capacity;
    int* m_data;
    void reserve(std::size_t newCapacity);
     T m_data;
};
