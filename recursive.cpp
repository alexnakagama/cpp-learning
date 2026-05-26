#include <iostream>

int factorial(int num) {
    // we start at 1 because every multiplication starting is 0 equals 0
    int resultado{1};

    for (int i = 1; i <= num; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int recursiveFactorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * recursiveFactorial(num - 1);
    }
}

int main() {
    // recursive is functions that calls itself to solve a problem
    // by breaking it down into smaller identical sub problems

    // they can be used to traverse a tree, a graph, etc

    int num{5};

    std::cout << "The factorial of " << num << " is: " << factorial(num)
              << std::endl;

    std::cout
        << "-------------------With recursive---------------------------\n";

    std::cout << "The factorial of " << num
              << " is: " << recursiveFactorial(num) << std::endl;

    return 0;
}
