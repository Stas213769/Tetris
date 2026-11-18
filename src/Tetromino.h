#ifndef TETROMINO_H
#define TETROMINO_H

#include <vector>

class Tetromino {
    private:
        // Wymiary tetromino
        const int size = 4;

        int x, y; // Pozycja tetromino na planszy

        // Tutaj zadeklaruj dwuwymiarowy vector
        std::vector<std::vector<char>> shape;
    
        
    public:
        Tetromino();
        void draw();
};

#endif