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

void clampInPlace(int& x, int low, int high) {
    if (x < low) {
        x = low;
    }
    else if (x > high) {
        x = high;
    }
}
