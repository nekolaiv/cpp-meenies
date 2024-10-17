#include <iostream>

double averageCalculator(double sum, double limit, double &average);
int main()
{
    double limit, grade, sum = 0, average = 0;
    std::cout << "\t    ~~~SUBJECT AVERAGE CALCULATOR~~~";
    do
    {
        std::cout << "\n\n\t     Input the Number of Subjects: ";
        std::cin >> limit;

        if (!limit)
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "\t\t      Invalid Input";
        }
    } while (!limit);

    for (int i = 1; i <= limit; ++i)
    {
    REPEAT:
        do
        {
            std::cout << "=> Subject #" << i << ": ";
            std::cin >> grade;
            if (!grade)
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "\t\t      Invalid Input";
                goto REPEAT;
            }
            sum += grade;
        } while (!grade);
    }

    averageCalculator(sum, limit, average);
    std::cout << "\n\t\t       Average: " << average << "\n\n\n\n\n\n\n\n\n";
    return 0;
}

double averageCalculator(double sum, double limit, double &average){
    return average = sum / limit;
}