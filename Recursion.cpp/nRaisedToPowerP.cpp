#include <iostream>
using namespace std;

int raisedToPower(int n, int p) {
    if(p==0) {
        return 1;
    }
    return n * raisedToPower(n,p-1);
}
 
int main() {
    int n,p;
    cin>>n>>p;
    cout<<raisedToPower(n,p);
    return 0;
}