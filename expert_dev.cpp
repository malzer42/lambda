/**
   lambda.cpp: Cpp file to test the lambda function
   Programmer(s): Pierre Abraham Mulamba
   Date of creation (modification): 20190723 (20190723)
   Usage: compile with g++-9 -std=c++17 -pedantic -wall lambda.cpp -o lambda 
 */
#include <iostream>
#include <complex>
#include <array>
template<class InputIterator, class OutputIterator, class UnaryFunction>
void transform(InputIterator it, InputIterator end,
               OutputIterator out, UnaryFunction f) {
  for (; it != end; ++it, ++out)
    *out = f(*it);
}
int main() {
  int a[] = { 1, 2, 3, 4, 5, 6 };
  transform(a, a+6, a, [](int x) { return x*2; });
}
