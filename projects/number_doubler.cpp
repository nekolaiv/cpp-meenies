#include <iostream>

void doubleNumber(int &number);

int main() {
  int number;
  std::cout << "Input number: ";
  std::cin >> number;

  doubleNumber(number);

  std::cout << "Doubled..." << std::endl;
  std::cout << "number: " << number;
}

void doubleNumber(int &number) { number *= 2; }