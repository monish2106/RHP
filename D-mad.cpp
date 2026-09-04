#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> grid(H);
    for (int i = 0; i < H; ++i) cin >> grid[i];
    vector<bool> is_safe_row(H, true);
    vector<bool> is_safe_col(W, true);
    for (int i = 0; i < H; ++i) {
        if (grid[i].find('#') != string::npos) is_safe_row[i] = false;
    }
    for (int j = 0; j < W; ++j) {
        bool has_bomb = false;
        for (int i = 0; i < H; ++i) {
            if (grid[i][j] == '#') {
                has_bomb = true;
                break;
            }
        }
        is_safe_col[j] = !has_bomb;
    }
    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<pair<int, int>> q;
    for (int i = 0; i < H; ++i) {
        if (!is_safe_row[i]) continue;
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '.' && is_safe_col[j]) {
                dist[i][j] = 0;
                q.push(make_pair(i, j));
            }
        }
    }
    if (q.empty()) {
        cout << 0 << endl;
        return 0;
    }
    int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        int r = curr.first;
        int c = curr.second;
        for (int d = 0; d < 4; ++d) {
            int nr = r + dir[d][0];
            int nc = c + dir[d][1];
            if (nr >= 0 && nr < H && nc >= 0 && nc < W) {
                if (grid[nr][nc] == '.' && dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push(make_pair(nr, nc));
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < H; ++i) {
        if (static_cast<int>(grid[i].size()) != W) continue;
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '.' && dist[i][j] != -1 && dist[i][j] <= K) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
