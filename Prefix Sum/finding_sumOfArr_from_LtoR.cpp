#include<bits/stdc++.h>
using namespace std;

#define ALL_I_KNOW_IS_GRIND() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define minel(v) *min_element(v.begin(),v.end())
#define maxel(v) *max_element(v.begin(),v.end())
#define sorta(x) sort(x.begin(),x.end())
#define sortd(x) sort(x.begin(),x.end(),greater<int>())



int main() {
  ALL_I_KNOW_IS_GRIND();
    int n;
    cin >> n;
    int a[n];
    int prefixSum[n];
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        if(i==1) {
            prefixSum[1] = a[1];
        }
        else {
            prefixSum[i] = prefixSum[i-1] + a[i];
        }
    }
    int q; cin>>q;
    while(q--) {
        int l,r,ans;
        cin>>l>>r;
        if(l==1) ans = prefixSum[r];
        else ans = prefixSum[r]-prefixSum[l-1];
        cout<<ans<<endl;
    }
    // for(int i=1; i<=n; i++) {
    //     cout<<prefixSum[i]<<" ";
    // }
    return 0;
}


//Input:
// 6
// 3 6 2 8 9 2
// 4
// 2 3
// 4 6
// 1 5
// 3 6
//Output
// 8
// 19
// 28
// 21
