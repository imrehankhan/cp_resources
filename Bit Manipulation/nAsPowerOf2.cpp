//Program to check if a number can be written as a power of 2 or not
#include <iostream>
using namespace std;

void powOf2(int n) {
    if((n & n-1)==0) {
        cout<<"Can be written as a power of 2"<<endl;
    }
    else {
        cout<<"Cannot be written as a power of 2"<<endl;
    }
}

int main() {
    powOf2(256);
    return 0;
}