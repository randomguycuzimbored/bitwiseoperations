#include <iostream>

bool getBit(unsigned int x, int n){
    return (x >> n) & 1;
}

unsigned int setBit(unsigned int x, int n){
    return x | (1u << n);
}
