#include <cstdint>
#include <iostream>

void worker()
{
    static std::uint32_t counter = 0U;
    static constexpr std::uint32_t ENERGY = 3;

    if (counter > ENERGY)
    {
        std::cout << "der Arbeiter hat keine Kraft mehr." << std::endl;
    }
    else
    {
        std::cout << "Doing my work" << std::endl;
    }
    ++counter;
    return;
}


int main()
{
    for (std::uint32_t i = 0U; i < 7U; ++i)


        worker();


    return 0;
}
