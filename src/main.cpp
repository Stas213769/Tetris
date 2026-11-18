#include "Board.h"
#include <ncurses.h>

int main() {
    initscr();

    Board board;
    board.draw();
    refresh();

    getch();
    endwin();

    return 0;
}