#include <iostream>

int main() {
    int quantity{};

    std::cout << "Numbers you want to save: ";
    std::cin >> quantity;

    int *ptr = new int[quantity];

    for (int i = 0; i < quantity; i++) {
        std::cout << "Introduce the number you want to save in " << i + 1
                  << ": ";
        std::cin >> *(ptr + i);
        std::cout << "\n";
    }

    std::cout << "\n";

    std::cout << "The sum of all of them:\n";

    int result{};

    for (int i = 0; i < quantity; i++) {
        result += *(ptr + i);
    }

    delete[] ptr;
    ptr = nullptr;

    std::cout << result << "\n";
}
