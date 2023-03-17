#include <bits/stdc++.h>

using namespace std;

int ways(int bags){
    if( bags==1 )
        return 1;
    if( bags==2 )
        return 2;  
    if( bags >= 3 )
        return ways(bags-1) + ways(bags-2);
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int bags;
        cin>>bags;
        cout<<ways(bags)<<endl;
    }
    return 0;
}