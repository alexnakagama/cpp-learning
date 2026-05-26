#include <iostream>
#include <vector>

int main() {

    // dynamic arrays

    // Vectors internally:
    // allocate memory dynamically
    // sometimes reserve extra capacity
    // resize when needed
    // That’s why they can grow automatically.

    std::vector<int> numbers{256, 53, 745, 123, 76};

    std::cout << numbers[0] << std::endl;

    // range based loop
    for (int num : numbers) {
        std::cout << "my numbers: " << num << std::endl;
    }

    // this function removes the last element
    numbers.pop_back();

    // this function adds an element to the vector
    numbers.push_back(5);

    // index loop with size() function
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "number " << i << ": " << numbers[i];
    }
}
