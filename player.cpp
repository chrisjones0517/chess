using namespace std;
#include <iostream>
#include <vector>
#include <cstring>
#include "piece.h"
#include "board.h"
#include "king.h"
#include "queen.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"

class Player
{

public:
    vector<Piece> white;
    vector<Piece> black;
    Board board;

private:
    bool castleRights = true;

public:
    Player()
    {
        int shift = 56;

        for (int i = 0; i < 16; i++)
        {
            if (i >= 8)
            {
                shift = 40;
            }

            int rankNum = board.board[i].rankNum;
            int file = board.board[i].file;
            int rankNum_b = board.board[i + shift].rankNum;
            int file_b = board.board[i + shift].file;

            if (i >= 8)
            {
//                this->build_players(King, 1, 'P', shift, i);
                white.push_back(King(1, 'P', shift, i));
//                cout << "file: " << k.file << "\n rank: " << k.rankNum << "\n piece: " << k.piece << "\n value: " << k.value << "\n";
            }
//            else
//            {
//                switch (i)
//                {
//                case 0:
//                    this->build_players(5, 'R', shift, i);
//                    break;
//                case 1:
//                    this->build_players(3, 'N', shift, i);
//                    break;
//                case 2:
//                    this->build_players(3, 'B', shift, i);
//                    break;
//                case 3:
//                    this->build_players(9, 'Q', shift, i);
//                    break;
//                case 4:
//                    this->build_players(1000, 'K', shift, i);
//                    break;
//                case 5:
//                    this->build_players(3, 'B', shift, i);
//                    break;
//                case 6:
//                    this->build_players(3, 'N', shift, i);
//                    break;
//                case 7:
//                    this->build_players(5, 'R', shift, i);
//                    break;
//                default:
//                    break;
//                }
//            }
        }
    }

private:
    build_players(int value, char piece, int shift, int i)
    {
        white.push_back(Piece(value, piece, board.board[i].rankNum, board.board[i].file));
        black.push_back(Piece(5, tolower(piece), board.board[i + shift].rankNum, board.board[i + shift].file));
        board.board[i].status = piece;
        board.board[i + shift].status = tolower(piece);
    }

public:
    Board getBoard()
    {
        return this->board;
    }

public:
    getCastleRights()
    {
        return this->castleRights;
    }

public:
    void setCastleRights(bool cr)
    {
        this->castleRights = cr;
    }

public:
    vector<Piece> getWhite()
    {
        return this->white;
    }

public:
    vector<Piece> getBlack()
    {
        return this->black;
    }
};
