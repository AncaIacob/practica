#include <iostream>
namespace pdv
{ 
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
 OutputIt copy (TInputIt first, TInputIt last, TOutputIt output)
    {
    for(TInputIt it = first;it!=last; ++it)
    {
        *output++= *it;
    }
    return output;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
    OutputIt copyif (TInputIt first, TInputIt last, TOutputIt output, TPredicate pred)
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
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
    TInputIt find (TInputIt first, TInputIt last, TValue value)
    {
     for(TInputIt it = first;it!=last; ++it)
    {
        if(*it==value)
        {
        return first;
        }
    }
    return last;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
    TInputIt findif (TInputIt first, TInputIt last, TPredicate pred)
    {
    for(TInputIt it = first;it!=last; ++it)
    {
        if(pred(*it))
        {
        return first;
        }
    }
    return last;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
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
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
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
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     void fill (TInputIt first, TInputIt last, TValue value)
     {
    for(TInputIt it = first;it!=last; ++it)
    {
        *it=value;
    }
    
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     void sort (TInputIt first, TInputIt last, TComparator comp)
     {
      while(first!=last)
      {
          comp(first, last);
          ++first;
      }
      return comp;
     }
     template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     bool equal ( TLhsInputIt lhsFirst, TInputIt lhsLast,  TRhsInputIt rhsFirst)
     {
 for(TLhsInputIt it = lhsFirst;it!=lhsFirst; ++it)
    {
        for(TRhsInputIt it1 = rhsFirst;it1!=lhsFirst; ++it1)
        {
            if(!(*it==*it1))
        {   
             return false;
        }
        }
        
    }
    return true;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     bool anyOf (TInputIt first, TInputIt last, TPredicate pred)
{
    return findif(first,last,pred)!=last;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     bool allOf (TInputIt first, TInputIt last, TPredicate pred)
     {
    return find(first,last,pred)!=last;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     bool noneOf (TInputIt first, TInputIt last, TPredicate pred)
     {
    return findif(first,last,pred)==last;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     OutputIt transform (TInputIt first, TInputIt last, TOutputIt output, TUnaryFunc func)
     {
    while (first !=last)
    {
        *output=func(*first++);
    }
    return output;
}
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
     TValue reduce (TInputIt first, TInputIt last, TValue initValue, TBinaryFunc func)
     {
        for(; first != last; ++first)
        {
           initValue = func(*first, initValue);
        }
        return initValue;
     }
}