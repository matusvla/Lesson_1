#include <iostream> //C++ specific
#include <stdio.h> //C specific

using namespace std; //Don't use default namespaces in big projects

// Illustration of function overloading and namespaces
// int printf(const char* input) {
//   return 0;
// }

int main() {
  cout << "Hello world" << endl; //C++ specific
  printf("Hello world");
  return 0;
}