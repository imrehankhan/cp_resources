#include <iostream>
using namespace std;
void pythagoreanTriplets(int a, int b, int c) {
    if(a*a == b*b + c*c) {
        cout<<"PYTHAGOREAN TRIPLET";
    }
    if(b*b == a*a + c*c) {
        cout<<"PYTHAGOREAN TRIPLET";
    }
    if(c*c == b*b + a*a) {
        cout<<"PYTHAGOREAN TRIPLET";
    }
    else {
        cout<<"NOT A PYTHAGOREAN TRIPLET";
    }
    return;
}
int main() {
    int a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    pythagoreanTriplets(a,b,c);
    return 0;
}