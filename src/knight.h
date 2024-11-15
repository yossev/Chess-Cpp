
// knight.h
#ifndef KNIGHT_H
#define KNIGHT_H


#include "piece.h"


class Knight : public Piece {
public:
    Knight(int x, int y, char color) : Piece(x, y, color) {}
    bool isValidMove(int newX, int newY) override;

};

#endif