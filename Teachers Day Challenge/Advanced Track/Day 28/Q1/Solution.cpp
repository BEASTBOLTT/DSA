#include <iostream>
#include <vector>
using namespace std;

int main(){
    string st;
    cin >> st;
    bool got0 = false;
    string ans = "";
    for(char x : st){
        if(x == '0' && !got0){
            got0 = true;
            continue;
        }
        else{
            ans.push_back(x);
        }
    }
    if(!got0){
        ans.pop_back();
    }
    cout << ans;



    
    return 0;
}