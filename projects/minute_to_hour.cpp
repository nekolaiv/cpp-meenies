#include <iostream>
using namespace std;

int main() {
  double m, s, h;

  cout << "Enter the number of Minutes: ";
  cin >> m;
  cout << "Enter the number of Seconds: " << endl;
  cin >> s;

  h = (m / 60) + (s / 60 / 60);

  cout << "Hours: " << h;
}