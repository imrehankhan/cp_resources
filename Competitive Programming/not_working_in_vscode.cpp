#include <bits/stdc++.h>
using namespace std;

int main() {
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
