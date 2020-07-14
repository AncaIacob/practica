#ifndef LIST_HPP
#define LIST_HPP
#include <cstddef>
#include "ListNode.hpp"
template<typename T>
 class List 
 {
   public:
   List();
   List(const ListNode& rhs);
  ~List();
     List<T>&operator=(const List& rhs);
     const T& operator[](std::size_t idx) const;
    T& operator[](std::size_t idx);
     std:: size_t getSize();
    void insert(std::size_t idx , T element);
    void pushFront(T element);
    void pushBack(T element);
    T getElement(std::size_t idx);
    int getFront();
    T getBack();
    void erase(std::size_t idx)
    void popFront();
    void popBack();
    void setElement(std::size_t idx, T element);
    void setFront(T element);
    void setBack(T element);
    void clear();
    bool empty();
     template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const List<U>& vec);

    private:
    size_t m_size;
    ListNode* m_head;
    ListNode* m_tail;


 };
 #endif
 #include "List.tpp"
 
