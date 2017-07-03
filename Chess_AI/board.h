#ifndef BOARD_H
#define BOARD_H
#include "types.h"
/*
Used to define a bitboard and the 15 types of boards that will
need to be tracked to cover all the pieces.
*/

#include <cstdint> 


class board
{
public:
    board();
    ~board();
private:
    /* The white piece positions */
    Bitboard WhitePawns;
    Bitboard WhiteRooks;
    Bitboard WhiteKnights;
    Bitboard WhiteBishops;
    Bitboard WhiteQueens;
    Bitboard WhiteKing;

    /* The black piece positions */
    Bitboard BlackPawns;
    Bitboard BlackRooks;
    Bitboard BlackKnights;
    Bitboard BlackBishops;
    Bitboard BlackQueens;
    Bitboard BlackKing;

    /* Commonly derived positions */
    Bitboard AllWhitePieces;
    Bitboard AllBlackPieces;
    Bitboard AllPieces;
};

#endif BOARD_H