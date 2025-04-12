//Question: Given N strings print unique strings in
//lexiographical order with their frequency
// N<=10^5, |s|<=100
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
   map<string,int> m;
   int n;
   cin>>n;
   string s;
   for(int i=0; i<n; i++) {
     cin>>s;
     m[s] = m[s] + 1;
   }
   for(auto pr : m) {
     cout<<pr.first<<" "<<pr.second<<endl;
   }
    return 0;
}