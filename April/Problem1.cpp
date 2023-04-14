// [C_AR04-易]

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,n,m;
    int cnt = 0;
    cin >> N;
    while(N--){

        if(cnt != 0){
            cout<<endl;
        }
        cnt = 1;

        cin >> n >> m;

        vector<vector<char>> map(n, vector<char>(m));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> map[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(map[i][j] == '1'){
                    bool edge = false;
                    if(i - 1 >= 0){
                        if(map[i - 1][j] == '0'){
                            edge = true;
                        }
                    }
                    if(i + 1 < n){
                        if(map[i + 1][j] == '0'){
                            edge = true;
                        }
                    }
                    if(j - 1 >= 0){
                        if(map[i][j - 1] == '0'){
                            edge = true;
                        }
                    }
                    if(j + 1 < m){
                        if(map[i][j + 1] == '0'){
                            edge = true;
                        }
                    }

                    if(edge == false){
                        cout << "_";
                    }else{
                        cout << "0";
                    }
                }else{
                    cout<<"_";
                }
            }
            cout << endl;
        }
    }
    return 0;
}