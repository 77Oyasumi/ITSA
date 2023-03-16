#include <iostream>

using namespace std;

int main(){
    int N, M;
    scanf("%d", &N);
    while(N--){
        int money = 70;
        scanf("%d", &M);
        if(M <= 1500){
            printf("%d\n", money);
        }else{
            money = 70 + ((M - 1500 + 499) / 500) * 5;
            printf("%d\n", money);
        }
    }
    return 0;
}