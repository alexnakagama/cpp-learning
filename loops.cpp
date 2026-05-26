#include <iostream>
#include <string>
#include <vector>

int main() {
    // for, for each, while, do while

    std::vector<int> numbers{5, 2, 62, 623, 7, 12};
    std::vector<std::string> people{"Sofia", "Javier", "Sebastian", "Ana"};

    int myNum{};

    std::cout << "Guess the number: ";
    std::cin >> myNum;

    std::cout << "\n";

    while (myNum != 6) {
        std::cout << "Wrong" << "\n";
        std::cout << "Enter the number: ";
        std::cin >> myNum;
    }

    std::cout << "Congrats you guessed the number!\n";

    std::string personGuess{};

    do {
        std::cout << "Enter name: ";
        std::cin >> personGuess;

        if (personGuess != people[3]) {
            std::cout << "Incorrect\n";
        }
    } while (personGuess != people[3]);

    for (int num : numbers) {
        if (num == 12) {
            std::cout << "Found the number 12";
            break;
        }
    }

    return 0;
}
