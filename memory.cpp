#include <iostream>

int main() {
    // creates a pointer with null (points to nothing)
    int *intPtr{nullptr};

    // allocates space for an int on the heap and stores address in intPtr
    intPtr = new int;
    // dereferences the pointer to change the value
    *intPtr = 10;

    // prints the memory address of the allocated heap space, not the value
    std::cout << intPtr << "\n";

    // dereferences the pointer to print the value stored at the memory address
    std::cout << *intPtr << "\n"; // 10
}
