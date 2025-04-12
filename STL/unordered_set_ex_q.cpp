//unordered_set can be used in questions in which SORTED ORDER OF 
//ELEMENTS IS NOT NECESSARY, and UNIQUENESS is necessary

//Question: Given N strings and q queries. In each query you
// are given a string, print "yes" if string is present otherwise print "no"
// N<=10^6, |s|<=100, q<=10^6
//Input:
// 3
// abc
// def
// ghi
// 2
// def
// klm


#include <bits/stdc++.h>
using namespace std;

int main() 
{
   unordered_set<string> s;
   string str;
   int n;
   cin >> n;
   for(int i=0; i<n; i++) {
     cin>>str;
     s.insert(str);
   }
   int q;
   cin>>q;
   for(int i=0; i<q; i++) {
     string st;
     cin>>st;
     if(s.find(st)==s.end()) {
       cout<<"No,this string isn't present in set\n";
     }
     else cout<<"This String is present in set\n";
   }
   
   
    return 0;
}