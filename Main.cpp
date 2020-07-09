#include"Vector.hpp";
#include<iostream>
using namespace std;
int main
{
   Vector vec(10);
   vec.pushBack(0);
   vec.pushBack(1);
  vec.pushBack(2);
  vec.pushBack(3);
  vec.pushBack(4);
  vec.pushFront(5);
  std::cout<< vec.getFront()<< " " << vec.getBack() << " " << vec.getElement(1) <<" " << vec.getCapacity()<<" " <<std::endl;

}