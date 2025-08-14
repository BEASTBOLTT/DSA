#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int c;
    cin >> c;
    int total = 0;
    vector <int> coins;
    for(int i = 0; i < c; i++){
        int ele;
        cin >>ele;
        
        total += ele;
        coins.push_back(ele);
    }
    int mine = 0;
    sort(coins.begin(), coins.end(), greater<int>());
    for(int i = 0; i < c; i++){
        
        mine+= coins[i];
        if(mine > total-mine){
            cout << i+1;
            break;
        }
    }
    return 0;
}