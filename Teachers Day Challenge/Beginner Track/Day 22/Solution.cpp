#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int t;
    cin >>t;
    string st;
    cin >> st;
    if (t == 0){
        cout << st;
    }
    for (int i = 0; i < t; i++){
        for (int j = 0; j < n-1; j++){
            if(st[j] == 'B' && st[j+1] == 'G'){
                swap(st[j], st[j+1]);
                j++;
            }
        }
    }
    cout << st;
    return 0;
}