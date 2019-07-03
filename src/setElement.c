int setElement(int i, int setNum,short array){
    int arrayOffset = 3 * (i - 1);
    int mask = setNum << arrayOffset;
    int masked (int)pow(2, sizeof(array) - arrayOffset) - 1 << arrayOffset;
    int newArray = mask & masked;
    return newArray;
}
