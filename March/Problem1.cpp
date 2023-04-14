#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin,s);

        int length = s.length();

        unordered_set<char> unique_chars;
        for (char c : s) {
            unique_chars.insert(c);
        }

        int unique_length = unique_chars.size();

        cout << length << " " << unique_length << endl;
    }

    return 0;
}