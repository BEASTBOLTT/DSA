#include <iostream>
#include <vector>
using namespace std;

int main(){
    string st;
    cin >> st;
    int cnt4 = 0;
    if(st[0] != '1'){
        cout << "NO";
        return 0;
    }
    for(int i = st.size()-1; i > -1; i--){
        if(st[i] == '1'){
            cnt4 = 0;
            continue;
        }
        else if(st[i] == '4'){
            cnt4++;
            if(cnt4 > 2){
                cout << "NO";
                return 0;   
            }
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";



    
    return 0;
}