#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<pair<int,int> > v = {{1,2}, {3,4}, {5,6}};
    for(int i=0; i<v.size(); i++) {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;   
}