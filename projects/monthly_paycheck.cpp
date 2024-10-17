#include <iostream>
using namespace std;

int main() {
  // Variable Declaration
  int noOfServiceYears;
  float bonus, additionalBonus, baseSalary, totalSales, monthly_paycheck;

  // Prompts the user for inputs
  cout << "Good day worker! \nI am tasked to calculate your monthly paycheck.";
  cout << "\n\nEnter your base salary: \n>> $";
  cin >> baseSalary;
  if (baseSalary < 0) {
    cout << "Base salary must not be less than 0.";
    return 0;
  } else {
  }

  // Input for Number of Years in Service
  cout << "\nEnter the number of years you've been working: \n>> ";
  cin >> noOfServiceYears;
  if (noOfServiceYears < 0) {
    cout << "Invalid input. Number of years in service cannot be less than 0.";
    return 0;
  } else {
    // Computation for Yearly Bonus
    if (noOfServiceYears > 0) {
      if (noOfServiceYears >= 0 && noOfServiceYears <= 5) {
        bonus = noOfServiceYears * 10;
      }

      else if (noOfServiceYears > 5) {
        bonus = noOfServiceYears * 20;
      } else {
      }
    } else {
    }
  }

  // Input for Total Sales
  cout << "\nEnter the total sales you made this month: \n>> $";
  cin >> totalSales;
  if (totalSales < 0) {
    cout << "Error! Total sales cannot be less than 0.";
    return 0;
  } else {
    // Computation for Total Sales Bonus
    if (totalSales > 0) {
      if (totalSales >= 5000 && totalSales < 10000) {
        additionalBonus = totalSales * 0.03;
      } else if (totalSales >= 10000) {
        additionalBonus = totalSales * 0.06;
      } else {
      }
    } else {
    }
  }

  // Computation for monthly paycheck
  monthly_paycheck = baseSalary + bonus + additionalBonus;

  // Output starts
  cout << "\nCongratulations! Your monthly paycheck is $" << monthly_paycheck;

  return 0;
}
