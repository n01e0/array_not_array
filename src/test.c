#include <stdio.h>
int getElement(int i, short array);

void main(){
    int a[5] = {1, 2, 3, 4, 5};
    printf("\nint array[5] = {1, 2, 3, 4, 5}\n");
    printf("このint型配列の要素一つのサイズは %ld バイト\nこのint型配列全体のサイズは %ld バイト\nこのint型配列の3番目の要素は %d\n", sizeof a[2], sizeof a, a[2]);

    short c[5] = {1, 2, 3, 4, 5};
    printf("\nshort array[5] = {1, 2, 3, 4, 5}\n");
    printf("このshort型配列の要素一つのサイズは %ld バイト\nこのshort型配列全体のサイズは %ld バイト\nこのshort型配列の3番目の要素は %d\n", sizeof c[2], sizeof c, c[2]);

    char k[5] = {1, 2, 3, 4, 5};
    printf("\nchar array[5] = {1, 2, 3, 4, 5}\n");
    printf("このchar型配列の要素一つのサイズは %ld バイト\nこのchar型配列全体のサイズは %ld バイト\nこのchar型配列の3番目の要素は %d\n", sizeof k[2], sizeof k, k[2]);

    unsigned short n = 22737;
    printf("\n%d\n",n);
    printf("この配列の要素一つにあたるサイズは 3 ビット\nこの数字で表される配列のサイズは %ld バイト\nこの配列の3番目の要素は %d\n",sizeof n,getElement(3, n));
}

int getElement(int i, short array){
    int element = (array >> 3 * (i - 1) & 0b111);
    return element;
}

