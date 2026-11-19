#include "Tetromino.h"
#include <ncurses.h>

Tetromino::Tetromino() : x(0), y(0) {
    // Inicjalizacja kształtu tetromino (przykładowy kształt)
    shape.resize(size, std::vector<char>(size, ' '));
    shape[1][1] = '#';
    shape[1][2] = '#';
    shape[2][1] = '#';
    shape[2][2] = '#';
}

void Tetromino::draw() {
    // Rysowanie tetromino
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (shape[i][j] == '#') {
                mvaddch(y + i, x + j, shape[i][j]);
            }
        }
    }
}