#include <cmath>
#include <iostream>
using namespace std;

int main() {
  bool flag = true;
  double edge;
  double area;
  char choice;

  while (flag) {
    cout << "Enter the length of one edge of the dodecahedron (in units): ";
    cin >> edge;

    if (!edge) {
      cout << "Invalid Input!";
      break;
    }

    area = 3 * sqrt(25 + 10 * sqrt(5)) * pow(edge, 2);

    cout << "Surface Area of the Dodecahedron: " << area << " square units"
         << endl;

    cout << "Do you want to compute again? [Y/N]: ";
    cin >> choice;

    if (choice == 'n' || choice == 'N' || choice == 'y' || choice == 'Y') {
      if (choice == 'n' || choice == 'N') {
        flag = false;
      }
    } else {
      cout << "Invalid Input!";
      flag = false;
    }
  }
  return 0;
}
