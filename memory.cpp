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

    // print the memory address of the pointer in the stack
    std::cout << &intPtr << "\n";

    // dereferences the pointer to print the value stored at the memory address
    std::cout << *intPtr << "\n"; // 10

    // frees the memory
    // os reclaims the block of memory in the heap where the int 10 was stored.
    //
    // the variable intPtr in the stack still holds the address but that address
    // is no longer valid, dangling pointer

    // if you try to access *intPtr after the delete you cause undefined error
    delete intPtr;

    // intPtr no longer points to a valid memory address in the heap
    intPtr = nullptr;
}
