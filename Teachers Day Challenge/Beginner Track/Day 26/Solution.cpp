#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string st;
    cin >> st;
    if(st.size()<7){
        cout << "NO";
        return 0;
    }
    int cnt = 1;
    for (int i = 1; i < st.size(); i++){
        if (st[i]==st[i-1]){
            cnt++;
            if (cnt >= 7){
                cout<< "YES";
                return 0;
            }
        }
        else{
            cnt = 1;
        }
    }
    cout << "NO";
    return 0;
}