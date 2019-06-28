#include <stdio.h>
#define PRINT = 1
#define MANIPULATE = 2
#define CHECK = 3

void main(){
    int board = 0; // 盤面 00 = "空", 01 = "x", 10 = "o"
    /*|1|2|3|
     *|4|5|6|
     *|7|8|9|
     */
    int errorNum = 0;
    int user = 1;
    char mark;
    int gameSetFlag = 0;
    int point;
    while(gameSetFlag == 0 && errorNum == 0){
        for(int i = 0; i < 9; i++, user ++){
            mark = (user % 2 > 0) ? 'x': 'o';
            printBoard(board) > 0 ? errorNum = PRINT:;
            printf("prease input player%d's manipulate! Your mark is %c\n",(user&1)+1, mark);
            printf("ex:\n |1|2|3|\n|4|5|6|\n|7|8|9|\nYou shot key the number you want to mark.\n>>>");
            scanf("%d",&point);
            boardManipulate(point) > 0 ? errorNum = MANIPULATE:;
            if (checkGame(board) == 1){
                printBoard(board) > 0 ? errorNum = PRINT:;
                printf("You win!!\n");
                gameSetFlag = 1;
            }
        }
    }
}

int printBoard(int board){
    char mark[2] = {'o', 'x'}
    for(int i = 1; i <= 9; i++){
        int point = board >> ((9 - i) * 3) & 0b111;
        point > 0 ? printf("|%c", mark[point]): printf("| ");
        (i % 3) == 0 ? printf("|\n"):;
    }
}

int boardManipulate(int point, int user){
    user = (user & 1) + 1;
    board = 
}

int checkGame(int board){}
