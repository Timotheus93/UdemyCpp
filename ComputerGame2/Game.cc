#include "Game.h"
#include <iostream>

void Game()
{
    uint32_t player = 0;
    char move;

    while (true)
    {
        //exit
        if (player == GOAL)
        {

            break;
        }

        // field
        for (uint32_t i = START; i < LEN_X; i++)
        {
            if (i == player)
            {
                std::cout << 'P';
            }
            else if (i == GOAL || i == START)
            {
                std::cout << '|';
            }
            else
            {
                std::cout << '.';
            }
        }

        // input
        std::cin >> move;

        // moving
        if (LEFT == move && player > 0)
        {
            //std::cout << "The player moved to the left!\n" << std::endl;
            player--;
        }
        else if (RIGHT == move && LEN_X - 1)
        {
            //std::cout << "The player moved to the right!\n" << std::endl;
            player++;
        }
        else
        {
            std::cout << "Unrecognized move!\n" << std::endl;
        }
    }
}
