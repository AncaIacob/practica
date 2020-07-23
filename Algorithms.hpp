#include <iostream>
namespace pdv
{ 
    template <typename TInputIt, typename TOutputIt>
    TOutputIt copy (TInputIt first, TInputIt last, TOutputIt output)
    {
    for(TInputIt it = first;it!=last; ++it)
    {
        *output++= *it;
    }
    return output;
}
   template <typename TInputIt, typename TOutputIt, typename TPredicate>
    TOutputIt copyif (TInputIt first, TInputIt last, TOutputIt output, TPredicate pred)
    {
    for(TInputIt it = first;it!=last; ++it)
    {
        if(pred(*it)==true)
        {
        *output++= *it;
        }
    }
    return output;
}
    template <typename TInputIt, typename T, typename TValue>
    TInputIt find (TInputIt first, TInputIt last, TValue value)
    {
     for(TInputIt it = first;it!=last; ++it)
    {
        if(*it==value)
        {
        return it;
        }
    }
    return last;
}
    template <typename TInputIt, typename TPredicate>
    TInputIt findif (TInputIt first, TInputIt last, TPredicate pred)
    {
    for(TInputIt it = first;it!=last; ++it)
    {
        if(pred(*it))
        {
        return it;
        }
    }
    return last;
}
template <typename TInputIt,typename TValue>
    size_t fcount (TInputIt first, TInputIt last, TValue value)
    {
    int size_t=0;
 for(TInputIt it = first;it!=last; ++it)
    {
        if(*it==value)
        {   
             size_t++;
        }
    }
    return size_t;
}
template <typename TInputIt,  typename TPredicate>
     size_t countif (TInputIt first, TInputIt last, TPredicate pred)
     {
     int size_t=0;
 for(TInputIt it = first;it!=last; ++it)
    {
        if(pred(*it))
        {   
             size_t++;
        }
    }
    return size_t;
}
template <typename TInputIt,typename TValue>
     void fill (TInputIt first, TInputIt last, TValue value)
     {
    for(TInputIt it = first;it!=last; ++it)
    {
        *it=value;
    }
    
}
template <typename TInputIt, typename TComparator>
     void sort (TInputIt first, TInputIt last, TComparator comp)
     {
      for(TInputIt i= first; first != last-1; ++first)
      {
          for(TInputIt j=1+i; j != last; ++j)
          {
              if(comp(*i,*j))
              {
                  swap(*i, *j);
              }
          }

      }
     }
     template <typename TLhsInputIt, typename TInputIt ,typename TRhsInputIt>
     bool equal ( TLhsInputIt lhsFirst, TInputIt lhsLast,  TRhsInputIt rhsFirst)
     {
  for(; lhsFirst != lhsLast; ++lhsFirst)
        {
            if(!(*lhsFirst == *(++rhsFirst)))
            {
                return false;
            }
        }
        return true;
}
template <typename TInputIt, typename TPredicate>
     bool anyOf (TInputIt first, TInputIt last, TPredicate pred)
{
    return findif(first,last,pred)!=last;
}
template <typename TInputIt, typename TPredicate>
     bool allOf (TInputIt first, TInputIt last, TPredicate pred)
     {
    return find(first,last,pred)!=last;
}
template <typename TInputIt, typename TPredicate>
     bool noneOf (TInputIt first, TInputIt last, TPredicate pred)
     {
    return findif(first,last,pred)==last;
}
template <typename TInputIt, typename TOutputIt, typename TUnaryFunc>
     TOutputIt transform (TInputIt first, TInputIt last, TOutputIt output, TUnaryFunc func)
     {
    while (first !=last)
    {
        *output=func(*first++);
    }
    return output;
}
template <typename TInputIt, typename TValue, typename TComparator, typename TBinaryFunc>
     TValue reduce (TInputIt first, TInputIt last, TValue initValue, TBinaryFunc func)
     {
        for(; first != last; ++first)
        {
           initValue = func(*first, initValue);
        }
        return initValue;
     }
}