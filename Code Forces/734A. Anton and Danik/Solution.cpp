#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int anton = 0;
    int danik = 0;
    string st;
    cin >> st;
    for(int i = 0; i < n; i++){
        if(st[i] == 'A'){
            anton++;
        }
        else{
            danik++;
        }
    }
    if(anton > danik){
        cout << "Anton";
    }
    else if(danik > anton){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }

    return 0;
}