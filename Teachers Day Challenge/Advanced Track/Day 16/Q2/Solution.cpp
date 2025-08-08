#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,x,y;
    vector<int> lvl;
    cin >> n;
    cin >> x;
    
    int ele;
    for (int i = 0; i < x; i++){
        cin >> ele;
        lvl.push_back(ele);
    }
    cin >> y;
    if(x == 0 && y == 0){
        cout << "Oh, my keyboard!";
        return 0;
    }
    for (int i = 0; i < y; i++){
        cin >> ele;
        lvl.push_back(ele);
    }
    sort(lvl.begin(), lvl.end());
    int cnt = 1;
    for(int i = 1; i < lvl.size(); i ++){
        if(lvl[i] != lvl[i - 1]){
            cnt++;
        }
    }
    if (n == cnt){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!" ;
    }
    return 0;
}