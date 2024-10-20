/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file arithmetic.cc
* @author Noah Iovanni Lorenzo Díaz alu0101633848@ull.edu.es
* @date 20/10/2024
* @brief Prints the results of operation with various arithmetic operators
*
*
* @bug There are no known bugs
* @see https://github.com/IB-2024-2025/P05-expressions/blob/main/expressions.md#ejercicios
*/

#include <iostream>

int main() {
    int left_number{3}, right_number{7};
    std::cout << left_number << " + " << right_number << " = "
              << left_number + right_number << '\n';
    std::cout << left_number << " - " << right_number << " = "
              << left_number - right_number << '\n';
    std::cout << left_number << " * " << right_number << " = " 
              << left_number * right_number << '\n';
    std::cout << left_number << " / " << right_number << " = "
              << left_number / right_number << '\n';
    std::cout << left_number << " % " << right_number << " = "
              << left_number % right_number << '\n';
    std::cout << left_number << " < " << right_number << " = "
              << (left_number < right_number) << '\n';
    std::cout << left_number << " > " << right_number << " = "
              << (left_number > right_number) << '\n';
    std::cout << left_number << " == " << right_number << " = "
              << (left_number == right_number) << '\n';
}