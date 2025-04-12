#include <iostream>
using namespace std;
int BinaryToDecimal(int n) {
    int decimal=0,base=1,rem;
    while(n!=0) {
        rem = n % 10;
        decimal = decimal + (rem*base);
        n = n / 10;
        base = base*2;
    }
    cout<<"The decimal form is: "<<decimal;
    return 0;
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    BinaryToDecimal(n);
    return 0;
}