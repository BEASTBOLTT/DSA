#include <iostream>

using namespace std;

int main(){
    string ele;
    cin>> ele;
    int lnc=0;
    for(int i = 0; i < ele.size(); i++){
        if(ele[i] == '4' || ele[i] == '7'){
            lnc++;
        }
    }

    if (lnc == 0){
        cout << "NO";
        return 0;
    }
    else{
        string check = to_string(lnc);
        for(int i = 0; i < check.size(); i++){
            if (check[i] != '4' && check[i] != '7' ){
                cout<< "NO";
                return 0;
            }
        }

    }
    cout<< "YES";
    return 0;

    
}