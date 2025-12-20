#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    unordered_set<string> seen;
    while (t--) {
        string s;
        cin >> s;
        if (seen.count(s)) cout << "YES\n";
        else {
            cout << "NO\n";
            seen.insert(s);
        }
    }
    return 0;
}