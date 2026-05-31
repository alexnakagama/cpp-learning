#include <iostream>
#include <utility>

int main() {
  std::string s{"Hello my name is alex nakagama"};

  std::cout << "Memory address: " << &s << "\n";
  std::cout << "Value: " << s << "\n";

  // move to a second string
  // internally its copying the pointer from s to s2
  // and the pointer of s becomes null
  std::string s2 = std::move(s);
  std::cout << &s << ": " << s << "\n";
  std::cout << &s2 << ": " << s2 << "\n";
}
