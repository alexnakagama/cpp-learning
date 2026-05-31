#include <iostream>

#include <utility> // required for std::move

std::string addText(std::string &&z) {
  z += "Text added";
  return z;
}

void incrementNumber(int &&num) { num += 5; }

int main() {
  // an L-Value (left value) its an expression that represents a memory location
  // that means that l value has a memory address

  // the z is l-value
  int z{15};

  std::cout << "The number before function: " << z << "\n";

  // the R-Value (right value) its the value 15. represents a temporal value
  // without a persistent location in memory

  // using move value to transform the z left value to a right value
  incrementNumber(std::move(z));
  std::cout << "The number after function: " << z << "\n";

  std::string text{"Hello world"};
  std::cout << "Text before: " << text << "\n";
  std::string text2 = addText(std::move(text));
  std::cout << "Text after: " << text2 << "\n";
}
