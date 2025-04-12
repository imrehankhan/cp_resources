#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<string> s;
    
    //Inserting in set
    s.insert("abc");
    s.insert("jkl");
    s.insert("fgh");
    s.insert("abc");
    
    //printing elements of set
    for(auto it=s.begin(); it!=s.end(); it++) {
      cout<<*it<<endl;
    }
    
    cout<<endl;
    
    //Finding an element in set
    auto it = s.find("fgh");
    if(it!=s.end()) cout<<*it<<endl;
    
    //Erasing an element
    s.erase("jkl");
    return 0;
}