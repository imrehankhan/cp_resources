//unordered_map can be used in questions in which ORDER OF 
//ELEMENTS IS NOT NECESSARY, and TIME COMPLEXITY of 
//unordered_map is also lesser than map 

//Question: Given N strings print unique strings
// with their frequency
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
   int n;
   cin>>n;
   unordered_map<string,int> m;
   for(int i=0; i<n; i++) {
     string s;
     cin>>s;
     m[s] = m[s] + 1;
   }
   for(auto &pr : m) {
     cout<<pr.first<<" "<<pr.second<<endl;
   }
    return 0;
}