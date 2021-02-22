#pragma once
//bool isValid(int row, int col, int board[5][5]);

void printBoard(int board[5][5]);
void makeBoard(int board[5][5]);
void tour(int board[5][5], int row, int col, int postion, bool &complete);
