int getElement(int i, short array){
    int element = (array >> 3 * (i - 1) & 0b111);
    return element;
}
