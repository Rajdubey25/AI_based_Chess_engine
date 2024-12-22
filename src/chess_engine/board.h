#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <array>

class Board {
public:
    Board(); // Constructor to initialize the board
    void display(); // Display the board

private:
    std::array<std::array<char, 8>, 8> board; // 8x8 chessboard
    void initializeBoard(); // Set up initial positions
};

#endif