#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP
#include<iostream>
#include <cstddef>
template <typename TInputIt, typename TOutputIt, typename OutputIt, typename TPredicate,typename TValue, typename TComparator,typename TLhsInputIt, typename TRhsInputIt, typename TUnaryFunc, typename TBinaryFunc>
class Algorithms
{
    public:
    OutputIt copy (TInputIt first, TInputIt last, TOutputIt output);
    OutputIt copyif (TInputIt first, TInputIt last, TOutputIt output, TPredicate pred);
     TInputIt find (TInputIt first, TInputIt last, TValue value);
     TInputIt findif (TInputIt first, TInputIt last, TPredicate pred);
     size_t fcount (TInputIt first, TInputIt last, TValue value);
     size_t countif (TInputIt first, TInputIt last, TPredicate pred);
     void fill (TInputIt first, TInputIt last, TValue value);
     void sort (TInputIt first, TInputIt last, TComparator comp);
     bool anyOf (TInputIt first, TInputIt last, TPredicate pred);
     bool allOf (TInputIt first, TInputIt last, TPredicate pred);
     OutputIt transform (TInputIt first, TInputIt last, TOutputIt output, TUnaryFunc func);
     
};
#include "Algorithms.tpp"
#endif  



