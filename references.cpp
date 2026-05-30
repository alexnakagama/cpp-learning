#include <iostream>

void exchangeValues(int &a, int &b) {
  int temp = a;

  a = b;
  b = temp;
}

int main() {
  // references is an alias for an already existing variable
  // its not a separated object and it doesnt store a memory address
  // it just acts as the original object

  int num1{5};
  int num2{10};

  std::cout << "Num 1: " << num1 << "\n";
  std::cout << "Num 2: " << num2 << "\n";

  exchangeValues(num1, num2);
  std::cout << "--------------------------\n";

  std::cout << "Num 1: " << num1 << "\n";
  std::cout << "Num 2: " << num2 << "\n";
}
