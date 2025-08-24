#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << "0";
        return 0;
    }
    vector<string> mag;
    for(int i = 0; i < n; i++){
        string st;
        cin >> st;
        if(mag.size() == 0){
            mag.push_back(st);
            continue;
        }
        if(mag[mag.size()-1][1] == st[0]){
            mag.push_back(" ");
            mag.push_back(st);
        }
        else{
            mag.push_back(st);
        }
    }
    int grps = 1;
    for(int i = 0; i < mag.size(); i++){
        if(mag[i] == " "){
            grps++;
        }
    }
    cout << grps;
    return 0;
    
}