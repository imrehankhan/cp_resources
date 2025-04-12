//Question link: https://codeforces.com/contest/4/problem/C
//Difficulty:- 1300

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin >> t;
   unordered_map<string,int> m;
   while(t--){
     string s;
     cin>>s;
     m[s] = m[s] + 1;
     if(m[s]<=1) cout<<"OK"<<endl;
     else cout<<s<<m[s]-1<<endl;
     
   }
    return 0;
}