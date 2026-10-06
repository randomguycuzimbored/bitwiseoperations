int doubled(int x){
    return x * 2;
}

void doubleInPlace(int& x) {
    x = x * 2;
}

void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
