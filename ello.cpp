#include <iostream>

int main()
{
    int number;

    std::cout << " ********** PRIME NUMBER CHECKER ********** " << std::endl;
    std::cout << "Enter a positive number: ";
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "INVALID INPUT: Please enter a positive number." << std::endl;
        return 1;
    }

    bool isPrimeFlag = true;

    if (number <= 1)
    {
        isPrimeFlag = false;
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrimeFlag = false;
                break;
            }
        }
    }

    if (isPrimeFlag)
        std::cout << "PRIME" << std::endl;
    else
        std::cout << "NOT PRIME" << std::endl;

    return 0;
}
