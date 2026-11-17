#include "Board.h"
#include <ncurses.h>

Board::Board() {
    // Inicjalizacja planszy
    grid.resize(height, std::vector<char>(width, ' '));
}

void Board::draw() {
    // Rysowanie planszy
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            mvaddch(y, x, grid[y][x]);
        }
    }
}