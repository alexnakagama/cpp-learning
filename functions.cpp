#include <iostream>

int sum(int num1, int num2) { return num1 + num2; }

int res(int num1, int num2) { return num1 - num2; }

float multi(float num1, float num2) { return num1 * num2; }

float div(float num1, float num2) {
    if (num2 <= 0) {
        std::cout << "You cant divide with 0" << std::endl;
    }
    return num1 / num2;
}

void showMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. sum\n";
    std::cout << "2. res\n";
    std::cout << "3. multi\n";
    std::cout << "4. div\n";
    std::cout << "5. exit\n";
    std::cout << "Choose: ";
}

int main() {
    float num1{};
    float num2{};

    int chooseOperation{};

    bool keepGoing{true};

    while (keepGoing) {
        showMenu();
        std::cin >> chooseOperation;

        if (chooseOperation == 1) {
            std::cout << "\nYou chose sum\n";
            std::cout << "Enter your number 1: ";
            std::cin >> num1;
            std::cout << "\nEnter number 2: ";
            std::cin >> num2;
            float result = sum(num1, num2);
            std::cout << "Your result is: " << result << std::endl;
        } else if (chooseOperation == 2) {
            std::cout << "\nYou chose res\n";
            std::cout << "Enter your number 1: ";
            std::cin >> num1;
            std::cout << "\nEnter number 2: ";
            std::cin >> num2;
            float result = res(num1, num2);
            std::cout << "Your result is: " << result << std::endl;
        } else if (chooseOperation == 3) {
            std::cout << "\nYou chose multiplication\n";
            std::cout << "Enter your number 1: ";
            std::cin >> num1;
            std::cout << "\nEnter number 2: ";
            std::cin >> num2;
            float result = multi(num1, num2);
            std::cout << "Your result is: " << result << std::endl;
        } else if (chooseOperation == 4) {
            std::cout << "\nYou chose division\n";
            std::cout << "Enter your number 1: ";
            std::cin >> num1;
            std::cout << "\nEnter number 2: ";
            std::cin >> num2;
            float result = div(num1, num2);
            std::cout << "Your result is: " << result << std::endl;
        } else if (chooseOperation == 5) {
            std::cout << "\nQuitting..." << std::endl;
            keepGoing = false;
        }
    }

    return 0;
}
