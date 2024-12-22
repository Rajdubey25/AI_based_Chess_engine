#include "board.h"

Board::Board(){
    initializeBoard();  
}

void Board::initializeBoard() {
    board= {{
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    }};
}

void Board::display() {
    for (const auto& row : board) {
        for (const auto& square : row) {
            std::cout << square << " ";
        }
        std::cout << std::endl;
    }
}