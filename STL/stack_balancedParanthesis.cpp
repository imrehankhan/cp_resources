#include <bits/stdc++.h>
using namespace std;
 
int main() {
    stack<char> s;
    //Taking size of string
    int n;
    char x;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>x;
        if(x=='(') s.push(x);
        else s.pop();
    }
    if(s.empty()) cout<<"Balanced";
    else cout<<"Unbalanced";
    return 0;
}