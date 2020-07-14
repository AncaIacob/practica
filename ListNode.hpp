#ifndef LIST_HPP
#define LIST_HPP

#include <cstddef>
template <typename T>
class ListNode
{
    public:
     ListNode(ListNode* prev, ListNode* next, T data);
      ListNode (const ListNode& rhs)
     ~ListNode();
     List<T>&operator=(const List& rhs);
     const T& operator[](std::size_t idx) const;
     T& operator[](std::size_t idx);
    size_t getSize();
    void insert(std::size_t idx , T element);
    void pushFront(T element);
    void pushBack(T element);
    T getElement(std::size_t idx);
    int getFront();
    T getBack();
    void popFront();
    void popBack();
    void setFront(T element);
    void setBack(T element);
    template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const List<U>& vec);
    void clear();
    bool empty();
     private:
     ListNode* m_prev;
     ListNode* m_next;
     size_t m_size;
     T m_data;


};
 #endif
 #include "List.tpp"