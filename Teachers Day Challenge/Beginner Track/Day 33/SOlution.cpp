#include <iostream>

using namespace std;

int main(){
    string st1, st2;
    cin >> st1 >> st2;
    string ans = "";
    for(int i = 0; i < st1.size(); i++){
        if(st1[i] == st2[i]){
            ans.push_back('0');
        }
        else{
            ans.push_back('1');
        }
    }
    cout << ans;
    return 0;
}