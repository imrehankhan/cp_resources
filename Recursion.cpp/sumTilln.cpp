#include <iostream>
using namespace std;

int prevSum(int n) {
    if(n==0) {
        return 0;
    }
    return n + prevSum(n-1);
}
 
int main() {
    int n;
    cin>>n;
    cout<<prevSum(n);
    return 0;
}