#include<bits/stdc++.h>
#include <unordered_set>
#include <cstdalign>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define veci vector<int>
#define pb push_back
#define popb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define e <<"\n"
#define minel(v) *min_element(v.begin(),v.end());
#define maxel(v) *max_element(v.begin(),v.end());
#define sorta(x) sort(x.begin(),x.end())
#define sortd(x) sort(x.begin(),x.end(),greater<int>())

int main() {
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif
  fastio();
  int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        unordered_set<int> st;
        
        for (int i = 1; i <= n * 2; ++i) {
            cin >> x;
            st.insert(x);
        }
        
        for (auto it = st.begin(); it != st.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    }
    return 0;
}