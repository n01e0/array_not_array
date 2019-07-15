#include <stdio.h>
#include <math.h>
#include "setElement.h"
#include "getElement.h"

void main(){
    unsigned short array = 22737;
    int a = getElement(3, array);
    printf("This array's 3rd element is %d\n",a);
    printf("Now change 3rd place 5\n");
    array = SET(3, 5, array);
    int m = getElement(3, array);
    printf("new array's 3rd element is %d\n", m);
}
