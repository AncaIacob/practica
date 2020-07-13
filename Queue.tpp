#include<iostream>
#include <cstdlib>
#include "Queue.hpp"
 template <typename T, template <typename> typename Tcontainer>
 Queue<T,Tcontainer>::Queque()
 {
     m_container=0;
 }
 template <typename T,template <typename> typename Tcontainer>
 Queue<T,Tcontainer>::Queue(const Queue&rhs)
 {
     m_container=rhs.m_container;
 }
  template <typename T,template <typename> typename Tcontainer>
 Queue<T,Tcontainer>::~Queue()
 {
     delete []this->m_container;
 }
 template <typename T,template <typename> typename Tcontainer>
 size_t getSize()
 {
   return m_container.getSize();

 }
 template <typename T,template <typename> typename Tcontainer>
 void Queque<T,Tcontainer>::push(T element)
 {
    m_container.pushBack(element);
 }
 template <typename T,template <typename> typename Tcontainer>
 void Queue<T,Tcontainer>::pop(T element)
 {
      T value = m_container.getFront();
      m_container.popFront();
      return val;
 }
template <typename T,template <typename> typename Tcontainer>
 void Queue<T,Tcontainer>::clear()
 {
   m_container.clear();
 }
 template <typename T,template <typename> typename Tcontainer>
 bool Queue<T,Tcontainer>::empty()
 {
    returnh m_container.empty();
 }