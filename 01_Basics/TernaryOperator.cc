#include <cstdint>
#include <iostream>


int main()
{
    // BOOL EXPR ? TRUE : FALSE;
    int age1 = 20;
    int age2 = 56;

    int olderAge = age1 > age2 ? age1 : age2;

    std::cout << olderAge;

    return 0;
}
