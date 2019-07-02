#include <stdio.h>
#define PRINT 1
#define MANIPULATE 2
#define CHECK 3

void main(){
    int board = 0; // 盤面 00 = "空", 01 = "x", 10 = "o"
    /*|1|2|3|
     *|4|5|6|
     *|7|8|9|
     */
    int errorNum = 0;   // 逐次エラー番号兼フラグ
    int user = 1;   // 二人なのでmodで奇遇判定してユーザー判定
    char mark;  // マークの記号切り替え用
    int gameSetFlag = 0;    // 自明
    int point;  // 座標入力用
    while(gameSetFlag == 0 && errorNum == 0){
        for(int i = 0; i < 9; i++, user ++){    // マス目が9個なので最大9回だから
            mark = (user % 2 > 0) ? 'x': 'o';   // 自明
            if(printBoard(board) > 0){errorNum = PRINT;}　// 想定動作は中で展開されて失敗してたらエラーフラグ
            printf("prease input player%d's manipulate! Your mark is %c\n",(user&1)+1, mark); // 
            printf("ex:\n |1|2|3|\n|4|5|6|\n|7|8|9|\nYou shot key the number you want to mark.\n>>>");
            scanf("%d",&point);
            while(boardManipulate(point, user, board) != 1){
                printf("That point was marked! you select other number!\n>>>");
                scanf("%d",&point);
            }
            if (checkGame(board) == 1){
                if(printBoard(board) > 0){errorNum = PRINT;}    // 揃ってたら盤面表示してお前の勝ち!w
                printf("You win!!\n");
                gameSetFlag = 1;
            }
        }
    }
}

int printBoard(int board){
    char mark[2] = {'o', 'x'};  // マーク用char配列
    for(int i = 1; i <= 9; i++){
        int point = board >> ((9 - i) * 3) & 0b111; // 座標計算
        point > 0 ? printf("|%c", mark[point]): printf("|-");   // 座標の数字が1以上(マーク入り)だったらマーク出力
        if((i % 3) == 0){printf("|\n");}    // 3マス毎に閉めて改行
    }
}

int boardManipulate(int point, int user, int board){
    user = (user & 1) + 1;  // modでやれよカス
    // pointの桁が00じゃなければmarked返す
    mk = // pointにあわせてシフト
    board += board;
}

int checkGame(int board){}

