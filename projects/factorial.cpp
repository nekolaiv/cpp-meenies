#include <iostream>
using namespace std;

int main() {
  int num;
  long long factorial = 1;
  char choice;
  do {
    cout << "\nEnter a positive integer: ";
    cin >> num;

    if (num < 0) {
      cout << "\nFactorial is not defined for negative numbers." << endl;
      break;
    } else {
      while (num > 0) {
        factorial = factorial * num;
        num--;
      }

      cout << "Factorial is: " << factorial << endl;
    }
    cout << "\nDo you want to input another number}? \n>> ";
    cin >> choice;
    if (choice == 'N' || choice == 'n') {
      cout << "\nThank you!";
      break;
    }
  } while (choice == 'Y' || choice == 'y');

  return 0;
}
