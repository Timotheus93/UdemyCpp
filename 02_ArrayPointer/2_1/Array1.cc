#include <cstdint>
#include <iostream>

// dataType varName[numElements];

int main()
{
    // 0..(5-1)
    //                        0   1    2   3   4
    std::int32_t array1[5] = {10, 11, 12, 13, 14};

    std::cout << array1[0] << std::endl; // read
    std::cout << array1[1] << std::endl; // read
    std::cout << array1[2] << std::endl; // read
    std::cout << array1[3] << std::endl; // read
    std::cout << array1[4] << std::endl; // read

    std::int32_t array2[3];
    array2[0] = 20; // write
    array2[1] = 21; // write
    array2[2] = 22; // write

    return 0;
}
