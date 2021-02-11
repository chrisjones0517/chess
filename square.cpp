#include <string>
#include <iostream>
using namespace std;

class Square
{

public:
    char color;
public:
    int rankNum;
public:
    int file;
public:
    char status;

public:
    Square()
    {
        Square('w', 0, 0, '0');
    }

public:
    Square(char color, int rankNum, int file, char status)
    {
        this->color = color;
        this->rankNum = rankNum;
        this->file = file;
        this->status = status;
    }
};

