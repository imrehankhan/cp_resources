#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main() {
    map<int,string> m;
    m[1] = "cdk";
    m[6] = "tse";
    m[5] = "vas";
    m[7] = "krt"; //Method-1 to insert in map
    m.insert({4,"fgh"});//Method-2 to insert in map

    //Finding a map
    auto i = m.find(5);
        if(i==m.end()) cout<<"No value"<<endl;
        else cout<<(*i).first<<" "<<(*i).second<<endl;
    
    //Erasing an element from a map
    m.erase(i);
    //Printing a map
    for(auto &pr: m) {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    //Clearing a map
    m.clear();
    return 0;
}

//unordered_map can be used in questions in which ORDER OF 
//ELEMENTS IS NOT NECESSARY, and TIME COMPLEXITY of 
//unordered_map is also lesser than map 