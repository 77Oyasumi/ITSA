#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct merchan{
    int idx;
    int profit;
    int cost;
    int weight;
    int expir;
};

bool cmp(merchan a, merchan b){
    if(a.profit != b.profit){
        return a.profit > b.profit;
    }else if(a.cost != b.cost){
        return a.cost > b.cost;
    }else if(a.weight != b.weight){
        return a.weight > b.weight;
    }else if(a.expir != b.expir){
        return a.expir > b.expir;
    }else{
        return a.idx < b.idx;
    }
}


int main(){
    merchan m[5];
    for(int i=0;i<5;++i){
        cin >> m[i].idx;
        cin.get(); // 讀取逗號並丟棄
        cin >> m[i].profit;
        cin.get(); // 讀取逗號並丟棄
        cin >> m[i].cost;
        cin.get(); // 讀取逗號並丟棄
        cin >> m[i].weight;
        cin.get(); // 讀取逗號並丟棄
        cin >> m[i].expir;
        cin.ignore(); // 忽略行末的換行符號
    }

    sort(m, m+5, cmp);

    for(int i = 0; i < 5; i++){
        cout << setw(5) << setfill('0') << m[i].idx << "," << m[i].profit << "," << m[i].cost << "," << m[i].weight 
        << "," << m[i].expir << endl;
    }
    return 0;
}