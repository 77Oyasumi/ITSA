#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int ans[30] = {0};  // 初始化 ans 陣列

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;

        ans[1] = 1;
        ans[2] = 2;

        for (int j = 3; j <= M; j++) {
            ans[j] = ans[j - 1] + ans[j - 2];
        }

        cout << ans[M] << endl;
    }

    return 0;
}


/*

int countDropMethods(int n);

int main() {
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int M;
        cin >> M;
        
        int methods = countDropMethods(M);
        cout << methods << endl;
    }
    
    return 0;
}

int countDropMethods(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return countDropMethods(n - 1) + countDropMethods(n - 2);
}

*/