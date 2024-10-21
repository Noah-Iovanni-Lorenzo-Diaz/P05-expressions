/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file controlc101a.cc 
* @author Noah Iovanni Lorenzo Díaz alu0101633848@ull.edu.es
* @date 21/10/2024
* @brief A program that prints the sum of the last three digits of a number
*
*
* @bug There are no known bugs
* @see https://jutge.org/problems/P37297_en 
*/

#include <iostream>
#include <cassert>

int main() {
  const int number_of_digits{3};
  int input_number, result{0};
  std::cin >> input_number;
  assert(input_number >= 100);
  for(int i{0}; i < number_of_digits; i++) {
    result += input_number % 10;
    input_number /= 10;
  }
  std::cout << result << std::endl;
  return 0;
}
