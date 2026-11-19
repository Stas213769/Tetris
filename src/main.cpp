#include "Board.h"
#include "Tetromino.h"
#include <ncurses.h>

int main() {
    initscr();

    Board board;
    Tetromino tetromino;
    board.draw();
    tetromino.draw();
    refresh();

    getch();
    endwin();

    return 0;
}