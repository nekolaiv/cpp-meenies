#include <cctype>
#include <cmath>
#include <iostream>
using namespace std;

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
double divide(int num1, int num2);

int main()

{
  char Choice;
  int fnum, snum;
  char operation;
  do {
    cout << "Choose an operation [+, -, *, /]\n>> ";
    cin >> operation;

    switch (operation) {
    case '+':
      cout << "Input First Number: ";
      cin >> fnum;
      cout << "Input Second Number: ";
      cin >> snum;
      cout << "\nSum is: " << add(fnum, snum);
      break;
    case '-':
      cout << "Input First Number: ";
      cin >> fnum;
      cout << "Input Second Number: ";
      cin >> snum;
      cout << "\nDifference is: " << subtract(fnum, snum);
      break;
    case '*':
      cout << "Input First Number: ";
      cin >> fnum;
      cout << "Input Second Number: ";
      cin >> snum;
      cout << "\nProduct is: " << multiply(fnum, snum);
      break;
    case '/':
      cout << "Input First Number: ";
      cin >> fnum;
      cout << "Input Second Number: ";
      cin >> snum;
      if (snum == 0) {
        cout << "Error! Denominator cannot be 0.";
        return 0;
      }
      cout << "\nQuotient is: " << divide(fnum, snum);
      break;

    default:
      cout << "Invalid Operation!";
      return 0;
    }
    cout << "\nDo you want to restart the program?[Y/N]\n>> ";
    cin >> Choice;

    if (Choice == 'n' || Choice == 'N') {
      return 0;
    }

  } while (Choice == 'y' || Choice == 'Y');
}

int add(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}
int subtract(int num1, int num2) {
  int diff = num1 - num2;
  return diff;
}
int multiply(int num1, int num2) { return (num1 * num2); }
double divide(int num1, int num2) { return (num1 / num2); }
