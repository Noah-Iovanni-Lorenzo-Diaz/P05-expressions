/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file desinflado.cc
* @author Noah Iovanni Lorenzo Díaz alu0101633848@ull.edu.es
* @date 20/10/2024
* @brief Program that turns an uppercase letter into its lowercase counterpart.
*
*
* @bug There are no known bugs
* @see https://github.com/IB-2024-2025/P05-expressions/blob/main/expressions.md#ejercicios
*/

#include <iostream>
#include <cassert>

char LowerToUpper(char input) {
    assert(input >= 'A' && input <= 'Z');
    return input + ' '; // Sum value 32 (whitespace) to return lowercase letter
}

int main() {
    char input;
    std::cin >> input;
    std::cout << LowerToUpper(input) << std::endl;
    return 0;
}