#include <cstdint>
#include <iostream>


int main()
{
    double number1;
    double number2;

    std::cout << "Please enter a number: ";
    std::cin >> number1;
    std::cout << "Please enter a anoter number: ";
    std::cin >> number2;

    std::cout << number1 << "," << number2;

    return 0;
}
