#include <stdio.h>

short set(int pt,int setNum, short array);
int pow(int p, int n);
int getElement(int i, short array);

void main(){
    unsigned short array = 22737;
    int a = getElement(3, array);
    printf("This array's 3rd element is %d\n",a);
    printf("Now change 3rd place 5\n");
    short newArray = set(3, 5, array);
    int m = getElement(3, newArray);
    printf("new array's 3rd element is %d\n");
    return 0;
}

short set(int pt, int setNum, short array){
    short offset = setNum << 3*(pt - 1);
    short bottomPadding = pow(2, (3 * setNum - 2));
    short headPadding = pow(2, (sizeof(array) * (8 - pt * 3) - 1));
    short newArray = offset + bottomPadding + headPadding;
}

int pow(int p, int n){
    int powed;
    for(int i = 0; i < n; i++){
        powed = p * p;
    }
    return powed;
}
int getElement(int i, short array){
    int element = (array >> 3 * (i - 1) & 0b111);
    return element;
}
