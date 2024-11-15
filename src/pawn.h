// pawn.h
#ifndef QUEEN_H
#define QUEEN_H


#include "piece.h"


class Pawn: public Piece {
public:
    Pawn(int x, int y, char color) : Piece(x, y, color) {}
    bool isValidMove(int newX, int newY) override;

};

#endif