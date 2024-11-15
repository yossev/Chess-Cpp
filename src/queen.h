
// queen.h
#ifndef QUEEN_H
#define QUEEN_H


#include "piece.h"


class Queen: public Piece {
public:
    Queen(int x, int y, char color) : Piece(x, y, color) {}
    bool isValidMove(int newX, int newY) override;

};

#endif