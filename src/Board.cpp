#include "Board.h"
#include <ncurses.h>

Board::Board() {
    // Inicjalizacja planszy
    grid.resize(height, std::vector<char>(width, ' '));
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
                grid[y][x] = '#'; // Ramka planszy
            } else {
                grid[y][x] = ' '; // Puste miejsce
            }
        }
    }
}

void Board::draw() {
    // Rysowanie planszy
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            mvaddch(y, x, grid[y][x]);
        }
    }
}