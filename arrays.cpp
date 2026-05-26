#include <iostream>

int main() {
    // an array contains data that has a relation
    // they are not dynamic
    int arrayNumbers[3];

    // here we are initializing the array
    int matrix[3]{20, 15, 40};

    std::cout << matrix[0] << std::endl;
    std::cout << "matrix[1]: " << matrix[1] << std::endl;

    matrix[1] = 253;

    std::cout << "matrix[1] ahora es: " << matrix[1] << std::endl;

    // classic for loop
    for (int i = 0; i < 3; i++) {
        std::cout << "position " << i << ": " << matrix[i] << "\n";
    }

    // modern for loop
    for (int num : matrix) {
        std::cout << num << '\n';
    }

    return 0;
}
