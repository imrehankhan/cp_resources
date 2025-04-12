#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Remove this line

    while (t--) {
        string s;
        getline(cin, s); // Read the entire time string

        int hour = stoi(s.substr(0, 2));
        string fromColon = s.substr(2, 6); // Adjust the substring indices

        if (hour == 0) {
            cout << "12" << fromColon << " AM" << endl;
        } else if (hour == 12) {
            cout << "12" << fromColon << " PM" << endl;
        } else if (hour < 12) {
            cout << s << " AM" << endl;
        }else if (hour > 12 && hour < 22) {
            cout <<"0"<< hour - 12 << fromColon << " PM" << endl;
        } else {
            cout << hour - 12 << fromColon << " PM" << endl;
        }
    }

    return 0;
}



