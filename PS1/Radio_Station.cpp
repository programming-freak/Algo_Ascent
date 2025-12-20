
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> ip_name;
    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        ip_name[ip] = name;
    }
    for (int i = 0; i < m; i++) {
        string command, ip_semicolon;
        cin >> command >> ip_semicolon;
        string ip = ip_semicolon.substr(0, ip_semicolon.size() - 1);
        cout << command << " " << ip_semicolon<< " #" << ip_name[ip] << '\n';
    }
    return 0;
}