#include <iostream>


using namespace std;

int main(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    string dis;
    dis.push_back(st[0]);
    for (int i = 1; i < n; i++){
        if(st[i] != st[i-1]){
            dis.push_back(st[i]);
        }
    }
    cout<< n - dis.size();
    return 0;
}