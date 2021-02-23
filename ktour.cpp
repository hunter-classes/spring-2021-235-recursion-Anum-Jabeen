#include <iostream>
#include "ktour.h"

/*bool isValid(int row, int col, int board[x][x]){
	if((row<0 || row >=x) || (col < 0 || col>=x) || board[row][col] !=0){
		return false;
	}else{
		return true;
	}
}*/


void printBoard(int board[5][5]){
     for(int row=0; row<5; row++){
	 for(int col=0; col<5; col++){
             std::cout << " " << board[row][col] << " ";
	 }	
	 std::cout << std::endl;    
    	 }
}

void makeBoard(int board[5][5]){
    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            board[row][col] = 0;
        }
    }	
}

void tour(int board[5][5], int row, int col, int position, bool &complete){
	//isValid(row,col,board);
        if((row<0 || row >=5) || (col < 0 || col>=5) || board[row][col] !=0){
                return;
        }
        
	if(position == 25){
           complete = true;
        }

	board[row][col]=position;
	position+=1;

    	if(!complete){
	   tour(board, row+1,col+2,position,complete);
	}if(!complete){
	   tour(board, row+1,col-2,position,complete);
	}if(!complete){
	  tour(board,row-1,col+2,position,complete);
	}if(!complete){
 	   tour(board,row-1,col-2,position,complete);
    	}if(!complete){
           tour(board,row+2,col+1,position,complete);
    	}if(!complete){
       	   tour(board,row+2,col-1,position,complete);
    	}if(!complete){
 	   tour(board,row-2,col+1,position,complete);
	}if(!complete){
	   tour(board,row-2,col-1,position,complete);
	}if(!complete){
	  board[row][col]=0;
          return;
    	}
}
