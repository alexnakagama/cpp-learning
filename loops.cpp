#include <iostream>

int main() {
    // for, while, do while

    int myNum{};

    std::cout << "Guess the number: ";
    std::cin >> myNum;

    std::cout << "\n";

    while (myNum != 6) {
        std::cout << "Wrong" << "\n";
        std::cout << "Enter the number: ";
        std::cin >> myNum;
    }

    do {
        std::cout << "Guess the number 2: ";
        std::cin >> myNum;

        if (myNum != 3) {
            std::cout << "Wrong very wrong\n";
        }

    } while (myNum != 3);

    std::cout << "Congrats you guessed the number" << std::endl;

    return 0;
}
