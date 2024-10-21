/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file threeintsum.cc
* @author Noah Iovanni Lorenzo Díaz alu0101633848@ull.edu.es
* @date 21/10/2024
* @brief A program that reads 3 numbers and print their sum 
*
* @bug There are no known bugs
* @see https://jutge.org/problems/P41221_en/statement
*/

#include <iostream>

int main() {
  int first_number, second_number, third_number;
  std::cin >> first_number >> second_number >> third_number;
  std::cout << (first_number + second_number + third_number) << std::endl;
  return 0;
}
