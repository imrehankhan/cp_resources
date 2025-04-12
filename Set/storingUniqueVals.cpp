#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Use a set to store unique characters
        set<char> unique_chars;
        for (int i = 0; i < s.size(); i++) {
            unique_chars.insert(s[i]);
        }

        // Minimum cost = number of unique characters
        int no_of_unique_chars = unique_chars.size();
        cout << no_of_unique_chars << endl;
    }
    return 0;
}