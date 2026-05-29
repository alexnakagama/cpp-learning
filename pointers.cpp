#include <iostream>

int num{55};

// function to which you pass a pointer to num and it sums 15
void miFunction(int *num) { *num = *num + 15; }

// function that receives a pointer as a parameter and increments 5 to the value
void addFive(int *value) { *value += 5; }

int main() {
  // pointers is a variable that stores the memory address of another variable

  // dynamic memory management
  // pass by reference
  // direct memory access

  int var{10};

  // declare the pointer *ptr
  int *ptr;

  // store the memory address of the var variable
  ptr = &var;

  std::cout << var << "\n";  // print the value of var
  std::cout << &var << "\n"; // print the memory address of var
  std::cout << ptr << "\n";  // print the memory address of var stored in
                             // the pointer ptr

  std::cout << *ptr
            << "\n"; // print the value of who the pointer is pointing to

  *ptr = 15; // change the var value from the pointer
  std::cout << *ptr << "\n";

  // call miFunction with the memory address of num
  miFunction(&num);
  std::cout << num << "\n"; // instead of returning 55 it returns 70

  // pointer to a constant value
  // the value the pointer is pointing to cannot change
  // the pointer can change who is pointing to

  // creates a constant = 15
  const int constNum{15};
  // creates a pointer pointing to memory address constNum
  const int *ptrToConst{&constNum};
  // *ptrToConst = 20; this would not compile
  const int salary{2000};

  // the pointer can change the memory address its pointing to
  ptrToConst = &salary;

  int myNumber{1000};

  // create a constant pointer
  int *const ptrConst{&myNumber};

  // ptrConst = &otherNum; this will not compile because the memory address the
  // pointer is pointing cannot be changed

  // we can change the value
  *ptrConst = 1500;

  int value{10};
  std::cout << "Value before addValue: " << value << "\n";
  // passing the memory address of value, pointer is a variable storing a mem
  // address
  addFive(&value);
  std::cout << "Value after addValue: " << value << "\n";
}
