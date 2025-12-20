using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<long long, long long> freq;
    for (int i = 0; i<n; i++) {
        long long x;
        cin >> x;
        freq[x]++;
    }
    long long ans = 0;
    for (auto &[x, c] : freq) {
        if (c >= x) ans += c - x;
        else ans += c;
    }
    cout << ans << "\n";
    return 0;
}