#include <iostream>
using namespace std;

int main() {
    string str = "123456789";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
    return 0;
}