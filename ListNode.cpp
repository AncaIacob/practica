/*#include "ListNode.hpp"
#include<cstddef>
#include<cstdlib>

ListNode::ListNode(ListNode* prev, ListNode* next, int data)
{
    
     m_next = next;
     m_prev = prev;
     m_data=data;

}
ListNode::~ListNode()
{
    if(m_prev != NULL)
     {
        m_prev->m_next = m_next;
     } 
     if(m_next != NULL)
     {
        m_next->m_prev = m_prev;
     }
}
ListNode* ListNode::getPrev()
{
    return this->m_prev;
}
void ListNode::setPrev(ListNode* prev)
{
     m_prev = prev;
}
ListNode* ListNode::getNext()
{
    return this->m_next;
}
void ListNode::setPrev(ListNode* next)

{
    m_next = next;
}
int ListNode::getData()
{
     return m_data;
}
void ListNode::setData(ListNode* data)
{

    m_prev = data->m_prev;
    m_next = data->m_next;
     m_data = data->m_data;
}*/