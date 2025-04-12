//Program to count the number of 1s in the binary representation of a number
#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin>>n;

    while(n>0) {
        n = n & n-1;
        count++;
    }
    cout<<count<<endl;
    //or
    cout<<__builtin_popcount(n)<<endl;
    //for long long numbers
    cout<<__builtin_popcountll(n)<<endl;
    return 0;
}