#include <iostream>
#include "ktour.h"

int main(){
    int board[5][5];
    makeBoard(board);

    bool complete = false;
    tour(board, 0, 0, 1, complete);

    return 0;
}
