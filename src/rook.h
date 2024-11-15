
#ifndef ROOK_H
#define ROOK_H

#include "piece.h"

class Rook : public Piece {
public:
    Rook(int x, int y, char color) : Piece(x, y, color) {}
    bool isValidMove(int newX, int newY) override;
};
#endif 


