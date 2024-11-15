// piece.h

#ifndef PIECE_H
#define PIECE_H

class Piece {
protected:
    int x;
    int y;
    char color; // 'B' OR 'W'

public:
// Constructor
    Piece(int x, int y, char color)  : x(x), y(y), color(color) {}
    virtual bool isValidMove (int newX, int newY) = 0;
    int getX() {return x;}
    int getY() {return y;}
    char getColor() const { return color;}
};


#endif