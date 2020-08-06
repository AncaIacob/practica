#ifndef EVENTPAYLOAD_HPP
#define EVENTPAYLOAD_HPP
class EventPayload
{
    int payload;
    int npayload;
    
  public:
     EventPayload(int pay, int npay)
     {
       this->payload=pay;
       this->npayload=npay;
     }

};
#endif /* EVENTPAYLOAD_HPP */
