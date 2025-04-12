#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<vector<int> > v2;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    do {
        v2.push_back(v);
    } while (next_permutation(v.begin(), v.end()));
    for (int i = 0; i < v2.size(); i++) {
        for (int j = 0; j < n; j++) {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//The number of permutations of an array of n  elements is given by n factorial, (n!).
