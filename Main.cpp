#include"Vector.hpp";
#include<iostream>
using namespace std;
int main
{
   Vector vec(5);
   vec.pushBack(0);
   vec.pushBack(1);
  vec.pushBack(2);
  vec.pushFront(3);
  std::cout<< vec.getFront()<< " " << vec.getBack() << " " << vec.getElement(1) <<" " << vec.getCapacity()<<" " <<std::endl;

}