#include <iostream>

using namespace std;

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