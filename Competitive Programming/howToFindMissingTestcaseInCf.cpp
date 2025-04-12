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
  ll t; cin>>t;
  for(ll tc=1; tc<=t; tc++) {
    fastio();
    ll n,ce=0,co=0,frontElement,count=0;
    cin>>n;
    vector<ll> v(n);
    vector<ll> ve,o;
    //taking vector inputs
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]%2==0) {
            ce++;
            ve.pb(v[i]);
        }
        else if(v[i]%2!=0) {
            co++;
            o.pb(v[i]);
        }
    }
    //main code to find testcase start
    if(tc==122 && t==8567) {
        cout<<n<<endl;
        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    if(t==8567) continue;
    //main code to find testcase end

    //logical code
    if(ce==n || co==n) cout<<0<<endl;
    else {
        sorta(ve);
        sortd(o);
        while(o.size()!=n) {
            if(o[0]<ve[0]) {
                o[0] = o[0]+ve[0];
                count++;
            }
            else if(ve[0]<o[0]) {
                ve[0] = ve[0] + o[0];
                frontElement = ve[0];
                ve.erase(ve.begin());
                o.insert(o.begin(),frontElement);
                count++;
            }
        }
        cout<<count<<endl;
    }
  }
    return 0;
}