short set(int pt, setNum, short array){
    short offset = setnum << 3*(pt - 1);
    short bottomPadding = pow(2, (3 * setnum - 2));
    short headPadding = pow(2, (sizeof(array) * (8 - pt * 3) - 1));
    short newArray = offset + bottomPadding + headPadding;
}

int pow(int p,n){
    int powed;
    for(int i = 0; i < n; i++){
        powed = p * p;
    }
    return powed;
}
