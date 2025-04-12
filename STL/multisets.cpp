//Multi sets are used to store multiple values in set

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   multiset<string> s;
   s.insert("abc");
   s.insert("def");
   s.insert("ghi");
   s.insert("abc");
   auto it=s.find("abc");
   if(it != s.end()) s.erase(it);
   for(auto value : s) {
     cout<<value<<endl;
   }
   
   
    return 0;
}