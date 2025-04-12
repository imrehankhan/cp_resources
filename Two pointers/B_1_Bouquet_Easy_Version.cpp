#include<bits/stdc++.h>
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
  fastio();
  ll t; cin>>t;
  while(t--) {
    ll n,m;
    cin>>n>>m;
    veci v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sorta(v);
    ll start=0,ans=0,sum=0;
    for(int i=0; i<n; i++) {
        sum+=v[i];
        while(sum>m || (start<n && v[i]-v[start]>1)) {
            sum -= v[start];
            start++;
        }
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
  }
    return 0;
}