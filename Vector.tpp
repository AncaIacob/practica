#include<cstddef>
#include<cstdlib>
#include"Vector.hpp"

constexpr std::size_t INITIAL_CAPACITY = 124;
 template <typename T>
 VectorIterator<T>::VectorIterator(T* value):m_value(value)
 {

 }
 template<typename T>
 VectorIterator<T>::VectorIterator(const VectorIterator& rhs)
 {
     m_value=rhs.m_value;
 }
 template<typename T>
  VectorIterator<T>& VectorIterator<T>::operator=(const VectorIterator& rhs)
  {
      return m_value=rhs.m_value;
      return *this;
  }
  template<typename T>
  bool VectorIterator<T>::operator!=(const VectorIterator& rhs)
  {
      return m_value!=rhs.m_value;
  }
  template<typename T>
  bool VectorIterator<T>::operator<(const VectorIterator& rhs)
  {
       if(m_value<rhs.m_value)
       return m_value;
       else
       return
       rhs.m_value;
  }
  template<typename T>
  VectorIterator<T>& VectorIterator<T>::operator++()
  {
      return ++m_value;
      return *this;
  }
  template<typename T>
  VectorIterator<T>& VectorIterator<T>::operator--()
  {
      return --m_value;
      return *this;
  }
  VectorIterator<T>& VectorIterator<T>::operator+=(std::size_t difference)
      return m_value+=difference;
      return *this;
  }
  VectorIterator<T>& VectorIterator<T>::operator-=(std::size_t difference)
      return m_value-=difference;
      return *this;
  }
    template<typename T>
  T& VectorIterator<T>::operator*()
  {
      return *m_value;
    
  }

template< typename T>
 Vector<T>::Vector()
{
   m_capacity=INITIAL_CAPACITY;
   m_size=0;
   m_data=new T[INITIAL_CAPACITY];
};

 template <typename T>
Vector<T>::Vector(const Vector &rhs)
{
  m_size = rhs.m_size;
  m_capacity = rhs.m_capacity; 
 m_data = new T[m_capacity]; 
 memcpy(m_data, rhs.m_data, m_capacity * sizeof(T));
}

 template <typename T>
 Vector<T>::~Vector()
 { 
     delete m_data;
     m_data=nullptr;
 }

  template <typename T>
Vector<T>& Vector<T>::operator=(const Vector& rhs)
{
    if(m_capacity != rhs.m_capacity)
    {
        delete[] m_data;
        m_data = new T[rhs.m_capacity];
    }
    m_capacity = rhs.m_capacity;
    memcpy(m_data, rhs.m_data, m_capacity * sizeof(T));

    return *this;
}

template <typename T>
 size_t Vector<T>:: getSize()
{
    return this->m_size;

}
template< typename T>
size_t Vector<T>:: getCapacity()
{
    return this->m_capacity;

}

template <typename T>
 void Vector<T>:: insert( size_t idx, T element){
     if(idx >= 0 && idx <= this->m_size){
        for(size_t i = idx; i < this->m_size - 1; ++i)
        {
            this->m_data[i+1] = this->m_data[i];
            this->m_size++;
        }
     this->m_data[idx]=element;
 }
 }

 template<typename T>
 T& Vector<T>::operator[](size_t idx) const
 {
     return m_data[idx];
 }

 template <typename T>
 T& Vector<T>:: getFront()
 {
  return this->m_data[0];
 }

 template <typename T>
  T& Vector<T>:: getBack()
 {
   return this->m_data[this->m_size-1];
 }

  template <typename T>
 T& Vector<T>::operator[]( size_t idx)
 {
     this->m_data[idx];
 }

 template<typename U>
std::ostream& operator<<(std::ostream& os, const Vector<U>& vec)
{
   for(std::size_t idx = 0; idx < vec.m_capacity; ++idx)
   {
       os << vec.m_data[idx] << " ";
   }
   os << std::endl;

   return os;
}

  template <typename T>
 int Vector<T>::pushFront(T element)
 {
   if(this->m_capacity>this->m_size)
   {
       for(size_t i=m_size;i>0;++i)
       {
           this->m_data[i]=this->m_data[i+1];
       }
       this->m_data[0]= element;
   }
 }

  template <typename T>
 int Vector<T>::pushBack(T element)
 {
     if(this->m_capacity>this->m_size)
     {
         for(size_t i=m_size;i>0;--i)
         {
             this->m_data[i]=this->m_data[i-1];
         }
         this->m_data[0]=0;
     }
 }
 
  template <typename T>
 void Vector<T>:: reserve(std::size_t newCapacity)
 {
     if(this->m_capacity<newCapacity)
     {
         T* newData= new int [newCapacity];
         this->m_capacity=newCapacity;
         for(size_t i=0;i<this->m_size;++i)
         {
             newData[i]=this->m_data[i];
         }
         delete [] this->m_data;
         this->m_data=newData;
     }
 }

  template <typename T>
 void Vector<T>::clear()
 {
   
    for(size_t i = 0; i < this->m_size; ++i){
        this->m_data[i] = 0;
    }
 }
  
  template <typename T>
 bool Vector<T>::isEmpty()
{
   if(m_size==0)
   return true;
   else
   return false;
}
 
 template <typename T>
 void Vector<T>::erase(size_t idx)
 {
  delete[] m_data[idx];
 }
 template<typename T>
 VectorIterator<T> Vector<T>::begin()
 {
     return VectorIterator<T>(m_data);
 }
 template<typename T>
 VectorIterator<T> Vector<T>::end()
 {
     return VectorIterator<T>(m_data+m_size);
 }