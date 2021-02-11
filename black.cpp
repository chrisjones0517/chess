using namespace std;
#include "piece.cpp"

class Black
{

private:
    Piece pieces[16];


public:
    White()
    {

        for (int i = 0; i < 16; i++)
        {
            if (i >= 8)
            {
                pieces[i] = Piece(1, 'p', 'b', "file/rank", i);
            }
            else
            {
                pieces[i] = Piece(3, 'x', 'b', "file/rank", i);
            }

        }
    }


public:
    Piece * getPieces()
    {
        return this->pieces;
    }
};
