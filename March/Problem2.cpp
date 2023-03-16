#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool is_valid = true;
        int count_x = 0, count_y = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'X') {
                count_x++;
                if (count_y > count_x) {  // 如果 Y 比 X 多
                    is_valid = false;
                    break;
                }
            } else if (s[j] == 'Y') {
                count_y++;
                if (count_x == 0) {  // 如果 Y 比 X 先出現，就代表不符合條件
                    is_valid = false;
                    break;
                }
            }
        }

        if (is_valid && count_x == count_y) {  // 如果符合條件，且 X 和 Y 的數量相等，就輸出 Yes
            cout << "Yes" << endl;
        } else {  // 否則輸出 No
            cout << "No" << endl;
        }
    }

    return 0;
}
