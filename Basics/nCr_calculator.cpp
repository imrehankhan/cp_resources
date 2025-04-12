#include <iostream>
using namespace std;
void ncrCalculator(int n, int r) {
    int fact1=1,fact2=1,fact3=1;
    for(int i=n; i>=1; i--) {
        fact1 = fact1 * i;
    }
    for(int i=r; i>=1; i--) {
        fact2 = fact2 * i;
    }
    for(int i=(n-r); i>=1; i--) {
        fact3 = fact3 * i;
    }
    cout<<"nCr = "<<fact1/(fact2*fact3);
    return;
}
int main() {
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    ncrCalculator(n,r);
    return 0;
}