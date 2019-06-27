#include <stdio.h>
void main(){
    int a[5] = {1, 2, 3, 4, 5};
    printf("このint型配列の要素一つのサイズは %d バイト\nこのint型配列全体のサイズは %d バイト\nこのint型配列の3番目の要素は %d\n", sizeof a[2], sizeof a, a[2]);

    char k[5] = {1, 2, 3, 4, 5};
    printf("size %d data %d val %d\n", sizeof k, sizeof k[2], k[2]);
    short c[5] = {1, 2, 3, 4, 5};
    printf("このshort型配列の要素一つのサイズは %d バイト\nこのshort型配列全体のサイズは %d バイト\nこのshort型配列の3番目の要素は %d\n", sizeof c[2], sizeof c, c[2]);

    unsigned short n = 74565;
    printf("この数字で表される配列のサイズは %d バイト\nこの配列の要素一つにあたるサイズは 3 ビット\nこの配列の3番目の要素は %d\n",sizeof n,(n >> 8)&15);
}
