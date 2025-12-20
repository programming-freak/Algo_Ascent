#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    unordered_map<string, int> freq;
    while (t--) {
        string s;
        cin >> s;
        if (freq[s] == 0) cout << "OK\n";
        else  cout << s << freq[s] << '\n';
        freq[s]++;
    }
    return 0;
}