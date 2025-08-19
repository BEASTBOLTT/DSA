#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int n4 = 0;
    int n7 = 0;
    while(n>=0){
        if(n%7 == 0){
            n7 = n/7;
            n = 0;
            break;
        }
        else{
            n4++;
            n = n-4;
        }
    }
    if(n == 0){
        for(int i = 0; i < n4; i++){
            cout<< 4;
        }
        for(int i = 0; i < n7; i++){
            cout<< 7;
        }
    }
    else{
        cout << -1;
    }
    return 0;
}