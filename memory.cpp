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

    // an array is a pointer to the first element of the array
    // numbers is a pointer to element [0]
    int numbers[]{100, 20, 30};

    // prints the memory direction of the first element of the array
    std::cout << numbers << "\n";

    // print the value stored at that address, 100
    std::cout << *numbers << "\n";

    // create a pointer pointing to numbers
    int *ptrNumbers{numbers};

    // print the memory address the pointer is pointing to
    std::cout << ptrNumbers << "\n";

    // print the value of who the pointer is pointing to
    std::cout << *ptrNumbers << "\n";

    // print the memory address + 1, so the memory address of the second element
    std::cout << (ptrNumbers + 1) << "\n";

    // print the value stored in the memory address + 1
    std::cout << *(ptrNumbers + 1) << "\n";

    // print the value stored in memory address 2
    // equivalent to std::cout << *(ptrNumbers+2) << "\n";
    std::cout << ptrNumbers[2] << "\n";

    delete ptrNumbers;
    ptrNumbers = nullptr;
}
