#include <iostream>

int num{55};

// function to which you pass a pointer to num and it sums 15
void miFunction(int *num) { *num = *num + 15; }

int main() {
    // pointers is a variable that stores the memory address of another variable

    // dynamic memory management
    // pass by reference
    // direct memory access

    int var{10};

    // declare the pointer *ptr
    int *ptr;

    // store the memory address of the var variable
    ptr = &var;

    std::cout << var << "\n";  // print the value of var
    std::cout << &var << "\n"; // print the memory address of var
    std::cout << ptr << "\n";  // print the memory address of var stored in
                               // the pointer ptr

    std::cout << *ptr
              << "\n"; // print the value of who the pointer is pointing to

    *ptr = 15; // change the var value from the pointer
    std::cout << *ptr << "\n";

    // call miFunction with the memory address of num
    miFunction(&num);
    std::cout << num << "\n"; // instead of returning 55 it returns 70
}
