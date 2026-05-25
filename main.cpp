#include <iostream> // import iostream library

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

    return 0;
}
