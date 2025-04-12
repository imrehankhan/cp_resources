//To check if a number is a whole number or not
#include <iostream>
using namespace std;

int main() {
    float n;
    cin>>n;

    if(floor(n) == n && n>=0) {
        cout<<"Whole number"<<endl;
    }
    else {
        cout<<"Not a whole number"<<endl;
    }
    return 0;
}