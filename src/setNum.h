short set(int pt, int setNum, short array){
    short offset = setNum << 3*(pt - 1);
    short bottomPadding = (short)pow(2, (float)(3 * setNum - 2));
    short headPadding = (short)pow(2, (float)(sizeof(array) * (8 - pt * 3) - 1));
    short newArray = offset + bottomPadding + headPadding;
}
