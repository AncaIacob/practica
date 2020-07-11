#include <cstddef>
template <typename T>
class ListNode
{
    public:
     ListNode(ListNode* prev, ListNode* next, T data);
      ListNode (const ListNode& rhs)
     ~ListNode();
     ListNode* getPrev();
     void setPrev(ListNode* prev);
     ListNode* getNext();
     void setNext(ListNode* prev);
      T getData();
     void setData(T data);
     private:
     ListNode* m_prev;
     ListNode* m_next;
     int* m_data;
     T m_data;


};