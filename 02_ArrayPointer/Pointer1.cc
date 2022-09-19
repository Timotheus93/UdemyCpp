#include <iostream>

int main()
{

    auto number = int32_t{50};
    auto *pNumber = &number;


    std::cout << "Number is: " << number << std::endl;
    std::cout << "Number memory is: " << &number << std::endl;
    std::cout << "Pointer to Number is: " << *pNumber << std::endl;

    return 0;
}
