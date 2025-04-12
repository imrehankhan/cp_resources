#include <iostream>
using namespace std;
int decimalToBinary(int n) {
    int x=1,ans=0,lastDigit;
    while (x<=n)
    {
        x = x*2;
    }
    x=x/2;
    while (x>0)
    {
        lastDigit = n/x;
        n = n - (lastDigit*x);
        x =x/2;
        ans = ans*10 + lastDigit;
    }
    cout<<ans;
    return 0;
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    decimalToBinary(n);
    return 0;
}