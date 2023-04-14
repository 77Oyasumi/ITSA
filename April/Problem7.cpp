#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // 建立二維矩陣，存儲每個礦點的礦產量
    vector<vector<int>> mines(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mines[i][j];
        }
    }

    // 計算每個矩陣範圍的礦產量
    for (int i = 0; i < m; i++) {
        int startX, startY, endX, endY;
        cin >> startX >> startY >> endX >> endY;

        int sum = 0;
        for (int x = startX - 1; x < endX; x++) {
            for (int y = startY - 1; y < endY; y++) {
                sum += mines[x][y];
            }
        }
        cout << sum << endl;
    }
    return 0;
}