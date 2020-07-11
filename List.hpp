#include <cstddef>
#include "ListNode.hpp"

template <typename T>
class List 
{
     

    public : 
        List();
      ListNode (const ListNode& rhs)
      ~List();

    
     std::size_t getSize();
    
    void insert(std::size_t idx, T data);
    void pushFront( T data);
    void pushBack( T data);
    int getElement(std::size_t idx);
    int getFront();
    int getBack();
    void setElement(std::size_t idx,  T datat);
    void setFront( T data);
    void setBack( T data);
    void clear();
    bool emplty();
    

    private :
    std::size_t m_size;
    ListNode* m_head;
    ListNode* m_tail;
    int* m_data;
    T m_data;
    void reserve(std::size_t newCapacity);
    

};