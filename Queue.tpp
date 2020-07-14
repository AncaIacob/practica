#include<iostream>
#include <cstdlib>
#include<iostream>
#include "Queue.hpp"
 template <typename T, template <typename> typename Tcontainer>
 Queue<T,Tcontainer>::Queue()
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
  template <typename T, template <typename> typename TContainer>
Queue<T,TContainer>& Queue<T,TContainer>::operator=(const Queue& rhs)
{
    m_container = rhs.m_container;
}
template <typename U, template <typename> typename UTContainer>
std::ostream& operator<<(std::ostream& os, const Queue<U,UTContainer>& myq)
{
    os << myq.m_container;
    return os;
}
 template <typename T,template <typename> typename Tcontainer>
 size_t getSize()
 {
   return m_container.getSize();

 }
 template <typename T,template <typename> typename Tcontainer>
 void Queue<T,Tcontainer>::push(T element)
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
 using TIterator = typename TContainer::TIterator;
 template <typename T,typename Tcontainer>
 Queue<T,Tcontainer>::Queue()
 {
     m_container=0;
 }
 template <typename T,typename Tcontainer>
 Queue<T,Tcontainer>::Queue(const Queue&rhs)
 {
     m_container=rhs.m_container;
 }
  template <typename T,typename Tcontainer>
 Queque<T,Tcontainer>::~Queque()
 {
     delete []this->m_container;
 }
 template <typename T,typename TContainer>
Queue<T,TContainer>& Queue<T,TContainer>::operator=(const Queue& rhs)
{
    m_container = rhs.m_container;
}
template <typename U, template <typename> typename UTContainer>
std::ostream& operator<<(std::ostream& os, const Queue<U,UTContainer>& myq)
{
    os << myq.m_container;
    return os;
}
 template <typename T,typename Tcontainer>
 size_t getSize()
 {
   return m_container.getSize();

 }
 template <typename T, typename Tcontainer>
 void Queue<T,Tcontainer>::push(T element)
 {
    m_container.pushBack(element);
 }
 template <typename T,typename Tcontainer>
 void Queue<T,Tcontainer>::pop(T element)
 {
      T value = m_container.getFront();
      m_container.popFront();
      return value;
 }
template <typename T, typename Tcontainer>
 void Queue<T,Tcontainer>::clear()
 {
   m_size=0;
 }
 template <typename T,typename Tcontainer>
 bool Queue<T,Tcontainer>::isEmpty()
 {
    return m_container.empty();
 }
template <typename T,typename TContainer>
TIterator begin()
{
  return TIterator<T>(m_data)
}
template <typename T,typename TContainer>
TIterator end()
{
return TIterator<T>(m_data+m_size);
}