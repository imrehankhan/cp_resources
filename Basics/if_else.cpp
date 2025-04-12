#include <iostream>
using namespace std;
int main () {
    int savings;
    cout<<"Enter savings: ";
    cin>>savings;
    if(savings>5000) {
        if(savings>10000) {
            cout<<"Road trip with neha";
        }
        else {
            cout<<"Shopping with neha";
        }
    }
    else if(savings>2000) {
        cout<<"Rashmi";
    }
    else {
        cout<<"Friends";
    }
    return 0;
}