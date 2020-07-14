
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
    void insert(size_t idx, T element);
    void pushFront(T element);
    void pushBack(T element);
    void erase (size_t idx);
    void popFront();
    void popBack();
    const T& operator[](size_t idx) const;
    T getFront();
    T getBack();
    T& operator[](size_t idx);
    void setElement(std::size_t idx, T element);
    void setFront(T element);
    void setBack(T element);
    void clear();
    bool empty();
    template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const Vector<U>& vec);


    private :
    std::size_t m_size;
    std::size_t m_capacity;
    
    void reserve(std::size_t newCapacity);
     T m_data;
};
#include "Vector.tpp"
