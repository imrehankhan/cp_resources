#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            count = count + 1;
        }
    }
    if(count == 2) {
        cout<<n<<" is prime";
    }
    else if(n <= 1) {
        cout<<n<<" is neither prime nor composite";
    }
    else {
        cout<<n<<" isn't prime";
    }

    return 0;
}