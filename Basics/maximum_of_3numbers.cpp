#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a>b && a>c) {
        cout<<a;
        cout<<" is the greatest";
    }
    else if(b>a && b>c) {
        cout<<b;
        cout<<" is the greatest";
    }
    else {
        cout<<c;
        cout<<" is the greatest";
    }
    return 0;
}