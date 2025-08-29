#include<iostream>

using namespace std;

bool lucky(int n){
    string st = to_string(n);
    for(int i = 0; i < st.size(); i++){
        if(st[i] == '4' || st[i] == '7'){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(lucky(n)){
        cout << "YES";
        return 0;
    }
    for(int i = 0; i < n/2+1; i++){
        if(lucky(i)){
            if(n%i == 0){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}