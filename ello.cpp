#include <iostream>

int main() {
    int number;

    std::cout << "********** PRIME NUMBER CHECKER **********\n\n";
    std::cout << "Enter a whole number: ";
    std::cin >> number;

    if (number <= 1) 
    {
        std::cout << "INVALID INPUT !";
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i < number; i++) 
    {
        if (number % i == 0) 
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime) 
    {
        std::cout << "The number is PRIME.";
    }
    else 
    {
        std::cout << "The number is NOT PRIME !";
    }
    return 0;
}