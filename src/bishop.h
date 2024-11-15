// BISHOP_H
#ifndef BISHOP_H
#define BISHOP_H

#include "piece.h"

class Bishop : public Piece {
public:
    Bishop(int x, int y, char color) : Piece(x, y, color) {}
    bool isValidMove(int newX, int newY) override;
};



#endif