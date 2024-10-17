#include <iostream>
using namespace std;

int main() {

  int limit;
  char choice;

  do {
    do {
      cout << "How many numbers? ";
      cin >> limit;
    } while (limit < 1);

    int arr[limit];

    for (int i = 0; i < limit; i++) {
      cout << "Input [" << i + 1 << "]: ";
      cin >> arr[i];
    }

    for (int i = 0; i < limit; i++) {
      for (int j = 0; j < limit - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          swap(arr[j], arr[j + 1]);
        }
      }
    }

    for (int i = 0; i < limit; i++) {
      cout << arr[i] << " ";
    }

    cout << "\nAgain? [Y/N] ";
    cin >> choice;
  } while (toupper(choice) == 'Y' || toupper(choice) == 'y');

  return 0;
}