 #include <iostream>
 using namespace std;
 int add(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum;
 }
 int main() {
    int a,b;
    cout<<"Enter 2 numbers (including space between them): ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b);


    return 0;
 }