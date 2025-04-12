#include <iostream>
using namespace std;
void factorial(int n) {
    int fact=1;
    for(int i=n; i>=1; i--) {
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return;
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    factorial(n);
    return 0;
}