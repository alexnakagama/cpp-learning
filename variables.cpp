#include <iostream>

// tells the C++ preprocessor to copy and paste the entire content of
// the specified header file directly into your source code,

#include <ostream>
#include <string>

// g++ main.cpp -o main
// this commands compiles my code into a binary executable file named main
// the -o flag is to change the executable file name

int main() {
    std::cout << "Hello world!\n";
    // std::endl creates a new line (\n) but also empties the buffer
    // \n only inserts a new line and the buffer is flushed automatically later
    // std::endl when we need the output to appear immediately like debugging or
    // logging info
    std::cout << "My name is alex\n";
    std::cout << "Im 20 years old." << std::endl;

    // 1 bytes
    char letter;
    letter = 'a';

    // 4 bytes
    // we also have short(2 bytes) long(4 bytes) and long long(8 bytes)
    int number;
    number = 150;

    // 4 bytes
    float decimalNumber = 2.22;

    // 1 byte
    bool isTrue = true;
    bool isFalse = false;

    // char letter = 'a' is declaring a variable
    // a variable is a space in the ram memory with a name(letter)
    // and a memory address

    std::cout << letter << std::endl;
    std::cout << number << std::endl;
    std::cout << decimalNumber << std::endl;
    std::cout << isTrue << std::endl;

    // brace initialization
    // it prohibits narrowing conversion preventing data loss
    // its prefered in modern c++
    int myAge{20};
    std::string myName; // string is not a primitive datatype

    std::cout << "Introduce your name: ";
    std::cin >> myName; // cin waits for user input

    std::cout << "My name is " << myName << "and my age is " << myAge
              << std::endl;

    return 0;
}
