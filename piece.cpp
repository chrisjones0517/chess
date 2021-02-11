#include <string>
#include <iostream>
using namespace std;

class Piece
{
public:
    int value;
public:
    char piece;
public:
    bool hasMoved = false;
public:
    int rankNum;
public:
    int file;

// Piece key: upper case char = white piece, lower case char = black piece
// k/K = king, n/N = knight, p/P = pawn, r/R = rook, b/B = bishop, q/Q = queen

public:
    Piece(int value = 1, char piece = 'a', int rankNum = 0, int file = 0)
    {
        this->value = value;
        this->piece = piece;
        this->rankNum = rankNum;
        this->file = file;
    }

public:
    possible_moves()
    {
        cout << "this should be overridden\n";
    }
};

