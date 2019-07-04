short set(int pt,int  setNum, short array){
    short offset = setNum << 3*(pt - 1);
    short bottomPadding = (short)pow(2.0, ((float)(3 * setNum - 2)));
    short headPadding = (short)pow(2.0, ((float)(sizeof(array) * (8 - pt * 3) - 1)));
    short newArray = offset + bottomPadding + headPadding;
}

/*
int pow(int p, int n){
    int powed;
    for(int i = 0; i < n; i++){
        powed = p * p;
    }
    return powed;
}
*/
