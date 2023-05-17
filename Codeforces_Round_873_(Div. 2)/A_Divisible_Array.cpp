#include <bits/stdc++.h>
#include "LocalDebug.h"

using namespace std;

#define int long long
#define pb push_back

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

int sum[N];

void init() {
    for (int i = 1; i < N; i++) {
        sum[i] = sum[i - 1] + i;
    }
}

void solve() {
    int n;
    cin >> n;
    if (sum[n] % n == 0) {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    else {
        int x = n - (sum[n] % n);
        cout << x + 1 << " ";
        for (int i = 2; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
}   

signed main() {
    IO;
    init();
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
