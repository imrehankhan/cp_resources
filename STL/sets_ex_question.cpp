//sets can be used in questions in which SORTED ORDER OF 
//ELEMENTS IS NECESSARY, and UNIQUENESS is also necessary

//Question: Given N strings print unique strings
// in lexiographical order
// N<=10^6, |s|<=100
//Input:
// 8
// abc
// def
// ghj
// abc
// jkl
// ghj
// ghj
// abc

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<string> s;
    string str;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
      cin>>str;
      s.insert(str);
    }
    for(auto value : s) {
      cout<<value<<endl;
    }
    
    //You can use this loop too
    // for(auto it=s.begin(); it!=s.end(); it++) {
    //   cout<<*it<<endl;
    // }
    return 0;
}