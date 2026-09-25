#include <iostream>

bool getBit(unsigned int x, int n){
    return (x >> n) & 1;
}
