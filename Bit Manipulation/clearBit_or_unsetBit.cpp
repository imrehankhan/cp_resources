#include <iostream>
using namespace std;

int clearBit(int n, int pos) {
    return (n & ~(1<<pos));  // "~" represents "not/inversion"
}

int main() {
    cout<<clearBit(5, 2)<<endl;
    return 0;
}