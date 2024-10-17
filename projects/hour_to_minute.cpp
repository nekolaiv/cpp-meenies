#include <iostream>
using namespace std;

int main() {
  double hour, minute, second;

  cout << "Enter the value of hours: ";
  cin >> hour;

  minute = hour * 60;
  second = hour * 60 * 60;

  cout << "Minutes: " << minute << endl;
  cout << "Seconds: " << second;
}
