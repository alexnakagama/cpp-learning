#include <iostream>

int main() {
    int age{};

    std::cout << "Introduce your age: ";
    std::cin >> age;
    std::cout << "\n";

    if (age < 18) {
        std::cout << "You are a minor!" << "\n";
    } else {
        std::cout << "You are an adult!" << "\n";
    }

    std::cout << "The program finished" << std::endl;

    return 0;
}
