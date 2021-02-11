using namespace std;
#include <iostream>
#include "square.h"

class Board
{

public:
    Square board[64];

public:
    Board()
    {
        int file = 0;
        int rankNum = 0;

        for (int i = 0; i < 64; i++)
        {
            if (file >= 8)
            {
                rankNum++;
                file = 0;
            }
            char color;

            if (i % 2 == 0)
            {
                color = 'b';
            }
            else
            {
                color = 'w';
            }

            this->board[i] = Square(color, rankNum, file, '0');
            file++;
        }
    }
};

