/**
   lambda.cpp: Cpp file to test the lambda function
   Programmer(s): Pierre Abraham Mulamba
   Date of creation (modification): 20190723 (20190723)
   Usage: compile with g++-9 -std=c++17 -pedantic -wall lambda.cpp -o lambda 
 */
#include <iostream>
#include <complex>
#include <array>

auto square = [](auto input){return input * input;};


int main(int argc, char *argv[])
{
    std::array<double, 3> a{10, 12.4, 1000.25};
    for (const auto& elt: a)
    {
	std::cout << square(elt) << std::endl;
	
    }

    std::cout << square(std::complex<double>(3, -2)) << std::endl;
    
    return 0;
}
