/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file booloperators.cc
* @author Noah Iovanni Lorenzo Díaz alu0101633848@ull.edu.es
* @date 20/10/2024
* @brief Program that prints the truth tables of the logical operators AND, OR and NOT
*
*
* @bug There are no known bugs
* @see https://github.com/IB-2024-2025/P05-expressions/blob/main/expressions.md#ejercicios
*/

#include <iostream>

void inline newline() {
    std::cout << '\n';
}

void printAND(bool a = 0, bool b = 0) {
    std::cout << "AND:\n"; 
    std::cout << "A\tB\tA&B\n";
    for(int i{0}; i <= 1; i++) {
        for(int j{0}; j <= 1; j++) {
            a = i;
            b = j;
            std::cout << a << '\t' << b << '\t' << (a && b) << '\n';
        }
    }
    newline();
}

void printOR(bool a = 0, bool b = 0) {
    std::cout << "OR:\n"; 
    std::cout << "A\tB\tA|B\n";
    for(int i{0}; i <= 1; i++) {
        for(int j{0}; j <= 1; j++) {
            a = i;
            b = j;
            std::cout << a << '\t' << b << '\t' << (a || b) << '\n';
        }
    }
    newline();
}

void printNOT(bool a = 0, bool b = 0) {
    std::cout << "NOT:\n"; 
    std::cout << "A\t!A\n";
    for(int i{0}; i <= 1; i++) {
        a = i;
        std::cout << a << '\t' << !a << '\n';
    }
    newline();
}

int main() {
    printAND();
    printOR();
    printNOT();
    return 0;
}