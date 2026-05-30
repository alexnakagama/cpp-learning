#include <iostream>

int num{55};

// car class
class Car {
  // property of the car
private:
  std::string model;

  // constructor
public:
  Car(std::string mod) : model(mod) {}

  // method getModel, returns model
  std::string getModel() const { return model; }
};

// this function creates a new car and returns a pointer pointing to it
Car *createCar(std::string model) {
  Car *newCar{new Car(model)};
  return newCar;
}

// function to which you pass a pointer to num and it sums 15
void miFunction(int *num) { *num = *num + 15; }

// function that receives a pointer as a parameter and increments 5 to the value
void changeValue(int *value) { *value += 5; }

int main() {
  // create a car calling the function
  Car *myCar = createCar("Honda");

  // accessing model through the pointer and show the model
  std::cout << "myCar model: " << myCar->getModel() << "\n";

  // its important to free the memory when its not used
  delete myCar;
  myCar = nullptr;

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
  std::cout << "Value before changeValue: " << value << "\n";
  // passing the memory address of value, pointer is a variable storing a memory
  // address
  changeValue(&value);
  std::cout << "Value after changeValue: " << value << "\n";

  // pointer pitfalls
  // 1. Dereferencing a null pointer
  // 2. Memory leak
  // 3. Buffer overflow
  // 4. Double free
  // 5. Dangling pointer
  // 6. Access violation
}
