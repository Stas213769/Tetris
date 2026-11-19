#include "Tetromino.h"

Tetromino::Tetromino() : x(0), y(0) {
    // Inicjalizacja kształtu tetromino (przykładowy kształt)
    shape.resize(size, std::vector<char>(size, ' '));
    shape[1][1] = '#';
    shape[1][2] = '#';
    shape[2][1] = '#';
    shape[2][2] = '#';
}