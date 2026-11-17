#include "Board.h"
#include <ncurses.h>

int main() {
    initscr();

    Board board;
    board.draw();

    getch();
    endwin();

    return 0;
}