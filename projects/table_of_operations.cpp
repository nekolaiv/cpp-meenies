#include <cstdlib>
#include <iostream>

void Clear() {
  system("clear");
  std::cin.clear();
  std::cin.ignore();
}
void Endl() { std::cout << std::endl; }

void Addition() {
  long long Addend1, Limit;
  long long Addend2 = 0;
  long long Sum = 0;
  char Choice;

  std::cout << "TABLE OF ADDITION" << std::endl;
  std::cout << "Enter a Number: ";
  if (!(std::cin >> Addend1)) {
    Clear();
    return Addition();
  }
  std::cout << "\nEnter Limit of Addend: ";
  if (!(std::cin >> Limit)) {
    Clear();
    return Addition();
  }

  while (Addend2 <= Limit) {
    std::cout << Addend1 << " + " << Addend2 << " = " << Sum << std::endl;
    Addend2++;
    Sum = Addend1 + Addend2;
  }

  Endl();
  std::cout << "Again?[y/n] \n>> ";
  std::cin >> Choice;

AGAIN:
  switch (toupper(Choice)) {
  case 'Y':
    Clear();
    return Addition();

  case 'N':
    Clear();
    return;

  default:
    Clear();
    goto AGAIN;
  }
}

void Subtraction() {
  long long Minuend, Limit;
  long long Subtrahend = 0;
  long long Difference = 0;
  char Choice;

  std::cout << "TABLE OF SUBTRACTION" << std::endl;
  std::cout << "Enter a Number: ";
  if (!(std::cin >> Minuend)) {
    Clear();
    return Subtraction();
  }
  std::cout << "\nEnter Limit of Subtrahend: ";
  if (!(std::cin >> Limit)) {
    Clear();
    return Subtraction();
  }

  while (Subtrahend <= Limit) {
    std::cout << Minuend << " - " << Subtrahend << " = " << Difference
              << std::endl;
    Subtrahend++;
    Difference = Minuend - Subtrahend;
  }

  Endl();
  std::cout << "Again?[y/n] \n>> ";
  std::cin >> Choice;

AGAIN:
  switch (toupper(Choice)) {
  case 'Y':
    Clear();
    return Subtraction();

  case 'N':
    Clear();
    return;

  default:
    Clear();
    goto AGAIN;
  }
}

void Multiplication() {
  long long Multiplicand, Limit;
  long long Multiplier = 0;
  long long Product = 0;
  char Choice;

  std::cout << "TABLE OF MULTIPLICATION" << std::endl;
  std::cout << "Enter a Number: ";
  if (!(std::cin >> Multiplicand)) {
    Clear();
    return Multiplication();
  }

  std::cout << "\nEnter Limit of Multiplier: ";
  if (!(std::cin >> Limit)) {
    Clear();
    return Multiplication();
  }

  while (Multiplier <= Limit) {
    std::cout << Multiplicand << " * " << Multiplier << " = " << Product
              << std::endl;
    Multiplier++;
    Product = Multiplicand * Multiplier;
  }

  Endl();
  std::cout << "Again?[y/n] \n>> ";
  std::cin >> Choice;

AGAIN:
  switch (toupper(Choice)) {
  case 'Y':
    Clear();
    return Multiplication();

  case 'N':
    Clear();
    return;

  default:
    Clear();
    goto AGAIN;
  }
}

void Division() {
  int Dividend, Limit, Remainder;
  int Divisor = 0;
  int Quotient = 0;
  char Choice;

  std::cout << "TABLE OF DIVISION" << std::endl;
  std::cout << "Enter a Number: ";
  if (!(std::cin >> Dividend)) {
    Clear();
    return Division();
  }

  std::cout << "\nEnter Limit of Divisor: ";
  if (!(std::cin >> Limit)) {
    Clear();
    return Division();
  }

  Remainder = Dividend;

  while (Divisor <= Limit) {
    std::cout << Dividend << " / " << Divisor << " = " << Quotient << " R."
              << Remainder << std::endl;
    Divisor++;
    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;
  }

  Endl();
  std::cout << "Again?[y/n] \n>> ";
  std::cin >> Choice;

AGAIN:
  switch (toupper(Choice)) {
  case 'Y':
    Clear();
    return Division();

  case 'N':
    Clear();
    return;

  default:
    Clear();
    goto AGAIN;
  }
}

void Power() {
  long long Base, Limit;
  long long Product = 1;
  char Choice;

  std::cout << "TABLE OF EXPONENT" << std::endl;
  std::cout << "Enter a Number: ";
  if (!(std::cin >> Base)) {
    Clear();
    return Power();
  }

  std::cout << "\nEnter Limit of Exponent: ";
  if (!(std::cin >> Limit)) {
    Clear();
    return Power();
  }

  for (int Exponent = 0; Exponent <= Limit; Exponent++) {
    std::cout << Base << " ^ " << Exponent << " = " << Product << std::endl;

    Product *= Base;
  }

  Endl();
  std::cout << "Again?[y/n] \n>> ";
  std::cin >> Choice;

AGAIN:
  switch (toupper(Choice)) {
  case 'Y':
    Clear();
    return Power();

  case 'N':
    Clear();
    return;

  default:
    Clear();
    goto AGAIN;
  }
}

void Factorial() {
  long long Number;
  char Choice;

  std::cout << "TABLE OF FACTORIAL" << std::endl;
  std::cout << "Enter a Number: ";
  if (!(std::cin >> Number)) {
    Clear();
    return Factorial();
  }

  for (long long Factorial = 1; Number > 1;) {
    Factorial *= Number;
    if (Factorial > Number) {
      std::cout << Factorial;
      Endl();
    }
    --Number;
    std::cout << Factorial << " * " << Number << " = ";
    if (Number == 1) {
      std::cout << Factorial;
    }
  }

  Endl();
  std::cout << "Again?[y/n] \n>> ";
  std::cin >> Choice;

AGAIN:
  switch (toupper(Choice)) {
  case 'Y':
    Clear();
    return Factorial();

  case 'N':
    Clear();
    return;

  default:
    Clear();
    goto AGAIN;
  }
}

int main() {
  char Choice;

  std::cout << "CALCULATOR" << std::endl;
  std::cout << "Pick an Operation [+, -, *, /, ^, !] or 'q' to quit. \n>> ";
  std::cin >> Choice;

  switch (Choice) {
  case '+':
    Clear();
    Addition();
    return main();

  case '-':
    Clear();
    Subtraction();
    return main();

  case '*':
    Clear();
    Multiplication();
    return main();

  case '/':
    Clear();
    Division();
    return main();

  case '^':
    Clear();
    Power();
    return main();

  case '!':
    Clear();
    Factorial();
    return main();

  case 'q':
  case 'Q':
    return 0;

  default:
    Clear();
    return main();
  }
}