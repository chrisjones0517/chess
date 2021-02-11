#include <iostream>
#include "player.h"
#include "board.h"

using namespace std;

int main()
{
//    King k;
//    cout << k.value;


    Player players;
    Board board = players.getBoard();

    for (int i = 8; i < 16; i++) {
        players.white[i].possible_moves(board);
    }

//    for (int i = 0; i < 64; i++)
//    {
//        cout << "color: " << board.board[i].color << "\n";
//        cout << "rank: " << board.board[i].rankNum << "\n";
//        cout << "file: " << board.board[i].file << "\n";
//        cout << "status: " << board.board[i].status << "\n\n";
//    }
//
//
//
//    cout << "White pieces: \n\n";
//
//    for (int i = 0; i < 16; i++)
//    {
//
//        cout << "current rank: " << players.white[i].rankNum << "\n";
//        cout << "current file: " << players.white[i].file << "\n";
//        cout << "has moved value: " << players.white[i].hasMoved << "\n";
//        cout << "value: " << players.white[i].value << "\n";
//        cout << "piece: " << players.white[i].piece << "\n";
//        cout << "********************************************\n";
//    }
//
//    cout << "Black pieces: \n\n";
//
//    for (int i = 0; i < 16; i++)
//    {
//        cout << "current rank: " << players.black[i].rankNum << "\n";
//        cout << "current file: " << players.black[i].file << "\n";
//        cout << "has moved value: " << players.black[i].hasMoved << "\n";
//        cout << "value: " << players.black[i].value << "\n";
//        cout << "piece: " << players.black[i].piece << "\n";
//        cout << "********************************************\n";
//    }

//		board.board[24].setStatus("occupied by white");




    // moves will be reversed for black
    // pawns are the only directionally dependent piece based on side
    return 0;
}


