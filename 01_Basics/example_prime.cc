#include <iostream>

// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result

// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{

    bool isPrime = true;

    unsigned int number = 0;
    std::cout << "Please enter an usigned int number: ";
    std::cin >> number;

    if (number == 0 || number == 1)
    {

        isPrime = false;
    }

    for (unsigned int i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }

    std::cout << "the number " << number << " is a prime number? " << std::boolalpha << isPrime << std::endl;

    return 0;
}
