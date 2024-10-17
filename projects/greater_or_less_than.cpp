#include <cctype>
#include <cmath>
#include <iostream>

int max(int num1, int num2);

int main() {
  int first_num, second_num;
  std::cout << "Input first number: ";
  std::cin >> first_num;
  std::cout << "Input second number: ";
  std::cin >> second_num;

  std::cout << "The highest number is: " << max(first_num, second_num);

  return 0;
}

int max(int num1, int num2) {
  int MAX;
  if (num1 > num2) {
    MAX = num1;
  } else {
    MAX = num2;
  }
  return MAX;
}