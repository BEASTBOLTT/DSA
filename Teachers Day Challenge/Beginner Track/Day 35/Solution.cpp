#include <iostream>

using namespace std;
bool checkPrime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, m;
    cin >>n >>m;
    bool truth = false;
    for(int i = n+1; i<=m; i++){
        if(checkPrime(i)){
            if(i == m){
                truth = true;
            }
            break;
        }
    }
    if(truth){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}