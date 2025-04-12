//Program to count number of numbers divisilble by 2 given numbers
#include <iostream>
using namespace std;

int divisibleNums(int n, int a, int b) {
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return c1+c2-c3;
}
 
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisibleNums(n,a,b);
    return 0;
}