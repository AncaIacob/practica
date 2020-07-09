#include "List.hpp"
#include<cstddef>
#include<cstdlib>
std::size_t List::getSize()
{
    return this->m_size;
}

List::List()
{
     

   
   
}
  void List::insert(std::size_t idx, int element)
   {
      ListNode* node = new ListNode(NULL,NULL,element);

    ListNode* p = m_head;
    if(idx == 0) 
    {
        pushFront(element);
    }
    if(idx == m_size)
    {
        pushBack(element);
    }
    while(idx)
    {
        p = p->getNext();
        --idx;
    }

    p->getPrev()->setNext(node);
    node->setPrev(p->getPrev());
    p->setPrev(node);
    node->setNext(p);
    
    m_size++;
   }
   void List::pushFront(int element)
   {
     ListNode* node = new ListNode(NULL,NULL,element);

    if(m_head == NULL)
    {
        m_head = m_tail = node;
    }else
    {
        node->setNext(m_head);
        m_head->setPrev(node);
        m_head = node;
    }
    m_size++;
   }
    void List::pushBack(int element)
    {
      ListNode* node = new ListNode(NULL,NULL,element);
   ListNode* p = m_head;
   if(m_head == NULL)
   {
       m_head = m_tail = node;
   }
   if(m_head == m_tail)
   {
       m_head->setNext(node);
       node->setPrev(m_head);
       m_tail = node;
   }
   while(p->getNext() != NULL)
   {
       p = p->getNext();
   }
    p->setNext(node);
    node->setPrev(p);
    m_tail = node;

    m_size++;

    }
int List::getElement(std::size_t idx)
   {
      return this->m_data[idx];
   }
   int List::getFront()
   {
       return this->m_data[0];
   }
    int List::getBack()
    {
        return this->m_data[this->m_size-1];
    }
   void List::setElement(std::size_t idx, int element)
   {
       this->m_data[idx]=element;
   }
   void List::setFront(int element)
   {
          this->m_data[0] = element;
   }
  void List::setBack(int element)
    {
        this->m_data[this->m_size] = element;
    }
  List::~List()
{
   
}