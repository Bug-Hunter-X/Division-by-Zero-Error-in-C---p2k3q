#include <iostream>

int main() {
  int a = 10;
  int b = 0;

  if (b != 0) {
    int c = a / b;
    std::cout << "Result: " << c << std::endl;
  } else {
    std::cerr << "Error: Division by zero!\n";
    return 1; // Indicate an error
  }

  return 0;
} 