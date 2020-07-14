#ifndef LIST_HPP
#define LIST_HPP
#include<iostream>
#include<cstdlib>
#include <cstddef>
#include "ListNode.hpp"
template<typename T>
class ListIterator
{
  public:
   ListIterator(T* value);
   ListIterator(const ListIterator& rhs);
   ListIterator<T>& operator=(const ListIterator& rhs);
   bool operator!=(const ListIterator& rhs);
   bool operator<(const ListIterator& rhs);
   ListIterator<T>& operator++();
   ListIterator<T>& operator--();
   ListIterator<T>& operator+=(std::size_t difference);
   ListIterator<T>& operator-=(std::size_t difference);
   T& operator*();
   private:
   T* m_value;
};
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
    size_t m_size;
    ListNode* m_head;
    ListNode* m_tail;


 };
 #endif
#include "List.tpp"