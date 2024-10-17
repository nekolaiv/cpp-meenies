#include <iostream>

int main()
{
    char Choice;
    int accNo;
    double Balance = 0;
    double Deposit;
    double Withdraw;

    std::cout << "Acc. #: ";
    std::cin >> accNo;
    system("clear");

    std::cout << "Welcome User!\n";

Menu:
    std::cout << "Your balance is " << Balance << "\n";
    std::cout << "Do you want to:"
                 "\nA. Deposit "
                 "\nB. Withdraw "
                 "\nC. Exit";
    std::cout << "\n>> ";
    std::cin >> Choice;
    switch (toupper(Choice))
    {
    case 'A':
        system("clear");
        std::cout << "Deposit Amount: ";
        std::cin >> Deposit;
        Balance += Deposit;
        system("clear");
        goto Menu;

    case 'B':
        system("clear");
        std::cout << "Withdraw Amount: ";
        std::cin >> Withdraw;
        Balance -= Withdraw;
        system("clear");
        goto Menu;

    case 'C':
        system("clear");
        std::cout << "Okay Thank you!";
        return 0;

    default:
        system("clear");
        goto Menu;
    }
}