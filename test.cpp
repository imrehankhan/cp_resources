#include <iostream>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define veci vector<int>
#define vecl vector<long long>
#define vecs vector<string>
#define setl set<long long>
#define mapl map<long long, long long>
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
  fastio();
    vector<int> v = {1,2,4,7};
    cout<<*lower_bound(v.begin(),v.end(),4);
    return 0;
}