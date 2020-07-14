#include "Vector.hpp"
#include "List.hpp"
#include "ListNode.hpp"
#include <cstdlib>

int main(){
   Vector<int> vec;
  vec.pushBack(0);
  vec.pushBack(1);
  vec.pushBack(2);
  vec.pushBack(3);
  vec.pushBack(4);
  vec.pushFront(5);

  std::cout << vec[0] << std::endl; 
  std::cout << vec[1] << std::endl; 
  std::cout << vec[2] << std::endl; 
  List<int> list;
  list.pushBack(6);
  list.pushBack(7);
  list.pushFront(8);
  std::cout <<list;

  Queue<int, List> myq;
  myq.push(9);
  myq.push(10);
  myq.push(11);
  myq.pop();
  std::cout << myq;

}