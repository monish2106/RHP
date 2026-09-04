#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;
    vector<int> dp(N + 1, 0);
    int rem = 0;
    map<int, int> m;
    m[0] = 0;
    for (int i = 1; i <= N; i++) {
        int curr;
        cin >> curr;
        rem = (rem + curr) % K;
        if (m.find(rem) != m.end()) {
            int previdx = m[rem];
            dp[i] = max(dp[i - 1], 1 + dp[previdx]);
        } else {
            dp[i] = dp[i - 1];
        }
        m[rem] = i;
    }
    cout << dp[N] << endl;
}
int main() {
    


    
}
