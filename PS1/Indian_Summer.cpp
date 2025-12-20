#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    unordered_set<string> seen;
    while (t--) {
        string s;
        getline(cin >> ws, s);
        seen.insert(s);
    }
    cout << seen.size();
    return 0;
}