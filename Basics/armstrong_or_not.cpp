#include <iostream>
using namespace std;
int main() {
    int n,sum=0,ld,cb;
    cout<<"Enter n: ";
    cin>>n;
    int originaln = n;

    while(n>0) {
        ld = n%10;
        cb = ld*ld*ld;
        sum = sum + cb;
        n = n / 10;
    }
    if(sum == originaln) {
        cout<<originaln<<" is an Armstrong number";
    }
    else {
        cout<<originaln<<" is not an Armstrong number";
    }
    return 0;
}