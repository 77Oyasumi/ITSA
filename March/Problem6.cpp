#include <bits/stdc++.h>

using namespace std;

int main(){

    int S;

    cin>>S;

    for(int i = 0; i < S; i++){

        int M, N, P;

        cin >> M >> N >> P;

        vector<vector<int>> status(M, vector<int>(N));

        for (int i = 0; i < status.size(); i++) {
            for (int j = 0; j < status[i].size(); j++) {
            cin >> status[i][j];
            }
        }
    }
    return 0;
}