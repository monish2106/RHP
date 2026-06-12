#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int l[n];
    int r[n];
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (h[i] > m)
            m = h[i];
        l[i] = m;
    }
    m = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (h[i] > m)
            m = h[i];
        r[i] = m;
    }
    int a = 0;
    for (int i = 0; i < n; i++) {
        int w;
        if (l[i] < r[i])
            w = l[i];
        else
            w = r[i];
        a += w - h[i];
    }
    cout << a;
    return 0;
}
