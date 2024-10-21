/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file intdivision.cc
* @author Noah Iovanni Lorenzo Díaz alu0101633848@ull.edu.es
* @date 21/10/2024
* @brief a program that reads two natural numbers a and b, with b > 0, 
*        and prints the integer division d and the remainder r of a divided by b.
*
* @bug There are no known bugs
* @see https://jutge.org/problems/P48107
*/

#include <iostream>
#include <cassert>

int main() {
    int dividend, divisor;
    std::cin >> dividend >> divisor;
    assert(dividend >= 0 && divisor > 0);
    std::cout << dividend / divisor << " " << dividend % divisor << std::endl;
    return 0;
}
