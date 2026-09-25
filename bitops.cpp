#include <iostream>

bool getBit(unsigned int x, int n){
    return (x >> n) & 1;
}

unsigned int setBit(unsigned int x, int n){
    return x | (1u << n);
}

unsigned int clearBit(unsigned int x, int n){
    return x & ~(1u << n);
}

unsigned int toggleBit(unsigned int x, int n){
    return x ^ (1u << n);
}

int countOnes(unsigned int x){
    int count=0;

    while(x!=0){
        count += x & 1u;
        x >>=1;
    }

    return count;
}

