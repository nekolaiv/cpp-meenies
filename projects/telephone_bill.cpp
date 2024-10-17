#include <iostream>
using namespace std;

int main() {
  // Variable declaration
  string FServiceCode;
  int AccountNumber;
  char ServiceCode;
  float NumberOfMinutes, TotalNumberOfMinutes, NumberOfMinutesDay,
      NumberOfMinutesNight, DayBill, NightBill, FinalBill;

  // Input Starts
  cout << "Hello user! I am tasked to calculate your bill \nfor using our "
          "cellular telephone service.";

  // Input Account Number
  cout << "\n\nEnter your 5 digit Account Number (12345): \n>> ";
  cin >> AccountNumber;

  // Check if Account Number is Valid
  if (AccountNumber < 10000 || AccountNumber > 99999) {
    cout << "Invalid Account Number!";
    return 1;
  }

  // Input Service Code
  cout << "\nEnter your Service Code (R/P): \n>> ";
  cin >> ServiceCode;

  // Regular Service
  if (ServiceCode == 'R' || ServiceCode == 'r') {
    FServiceCode = "Regular Service";

    // Regular Service Computation
    cout << "\nKindly, enter the total number of minutes you used the service: "
            "\n>> ";
    cin >> NumberOfMinutes;
    if (NumberOfMinutes >= 0 && NumberOfMinutes <= 50) {
      FinalBill = 10;
    } else if (NumberOfMinutes > 50) {
      FinalBill = NumberOfMinutes * 0.20;
    } else {
      cout << "\nError! Number of minutes cannot be less than 0.";
      return 1;
    }

    // Sum of Number of Minutes
    TotalNumberOfMinutes = NumberOfMinutes;
  }

  // Premium Service
  else if (ServiceCode == 'P' || ServiceCode == 'p') {
    FServiceCode = "Premium Service";

    // Premium Service Day Computation
    cout << "\nFor premium users, please enter the total number of minutes you "
            "used the service during daytime: \n>> ";
    cin >> NumberOfMinutesDay;

    if (NumberOfMinutesDay >= 0 && NumberOfMinutesDay <= 75) {
      DayBill = 25;
    } else if (NumberOfMinutesDay > 75) {
      DayBill = ((NumberOfMinutesDay - 75) * 0.10) + 25;
    } else {
      cout << "\nError! Number of minutes cannot be less than 0.";
      return 1;
    }

    // Premium Service Night Computation
    cout << "\nNow, enter the total number of minutes you used \nthe service "
            "during night time: \n>> ";
    cin >> NumberOfMinutesNight;

    if (NumberOfMinutesNight >= 0 && NumberOfMinutesNight <= 100) {
      FinalBill = DayBill;
    } else if (NumberOfMinutesNight > 100) {
      FinalBill = ((NumberOfMinutesNight - 100) * 0.05) + DayBill;
    } else {
      cout << "\nError! Number of minutes cannot be less than 0.";
      return 1;
    }

    // Sum of Number of Minutes
    TotalNumberOfMinutes = NumberOfMinutesDay + NumberOfMinutesNight;
  }

  // Returns Error if input is other than p/q
  else {
    cout << "\nError! Type a correct input.";
    return 1;
  }

  // Output starts
  cout << "\n-----RECEIPT----- \nAccount Number: " << AccountNumber
       << "\nType of Service: " << FServiceCode
       << "\nTotal Number Of Minutes: " << TotalNumberOfMinutes
       << " minutes \nAmount Due: $" << FinalBill << "\n";

  return 0;
}
