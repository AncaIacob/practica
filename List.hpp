#include <cstddef>
#include "ListNode.hpp"


class List 
{
     

    public : 
      
      List();
      ~List();

    
     std::size_t getSize();
    
    void insert(std::size_t idx,int element);
    void pushFront(int element);
    void pushBack(int element);
    int getElement(std::size_t idx);
    int getFront();
    int getBack();
    void setElement(std::size_t idx, int elemnet);
    void setFront(int element);
    void setBack(int element);
    void clear();
    bool emplty();
    

    private :
    std::size_t m_size;
    ListNode* m_head;
    ListNode* m_tail;
    int* m_data;
    void reserve(std::size_t newCapacity);
    

};