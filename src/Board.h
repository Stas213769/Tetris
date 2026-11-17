#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board {
    private:
        // Wymiary planszy
        const int width = 10;
        const int height = 20;

        // Tutaj zadeklaruj dwuwymiarowy vector
        std::vector<std::vector<char>> grid;

    public:
        // Funkcja rysująca planszę
        void draw();
};

#endif