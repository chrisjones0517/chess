#include <string>
#include <iostream>
#include "piece.h"
#include "board.h"
using namespace std;

class King : public Piece
{
public:
    King(int value = 1, char piece = 'a', int rankNum = 0, int file = 0)
    {
        this->value = value;
        this->piece = piece;
        this->rankNum = rankNum;
        this->file = file;
    }

public:
    possible_moves(Board b)
    {

        for (int i = 0; i < 64; i++) {
            cout << b.board[i].file << "\n";
        }
        cout << "Possible moves will be returned and iterated.\n";
    }

};
