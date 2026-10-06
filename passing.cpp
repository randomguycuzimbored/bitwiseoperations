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

bool divide(int dividend, int divisor, int& quotient, int& remainder) {
    if (divisor == 0) {
        return false;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    return true;
}

void sortThree(int& a, int& b, int& c) {
    if (a > b) {
        swapValues(a, b);
    }
    if (b > c) {
        swapValues(b, c);
    }
    if (a > b) {
        swapValues(a, b);
    }
}
