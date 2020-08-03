#include "Vector.hpp"
#include<cassert>

void TestGetSize()
{
    Vector<int> vec;
    assert(vec.getSize() == 0);
}
void TestGetCapacity()
{
    Vector<int> vec;
    assert(vec.getCapacity() == 0);
}
void TestInsert()
{
    Vector <int>vec;
    vec.insert(3,2);
}
 int main()
 {
     TestGetSize();
     TestGetCapacity();
     TestInsert();

     return 0;
 }