#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value) { //updating the bit is all about clearing the bit and then setting the bit
    int clearBit = (n & ~(1<<pos));
    return (clearBit | (value<<pos));
}

int main() {
    cout<<updateBit(5, 1, 1)<<endl;
    return 0;
}