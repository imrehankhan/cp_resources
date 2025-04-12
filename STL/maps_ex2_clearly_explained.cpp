//Maps example 2
//Ye question me apneku aise letters ka count batana tha, jo odd times occur hue Ex. "abaac" <- isme oddcount=3 hai kyu ki a3baar,b1baar,c1baar aye 
//Isliye mai map use kara taki, unique elements ka frequency rakh sakun
//Considering example abaac
//freq[a] = 3
//freq[b] = 1
//freq[c] = 1
//left vale values ku ".first" bolke access karsakte aur right vale values ke liye ".second" use karsakte

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
  int t; cin>>t;
  while(t--) {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int Oddcount=0;
    unordered_map<char,int> freq;
    for(int i=0; i<s.size(); i++) {
        freq[s[i]]++;
    }
    for(auto it : freq) {
        if(it.second%2!=0) Oddcount++;
    }
    cout<<Oddcount<<endl;
  }
    return 0;
}