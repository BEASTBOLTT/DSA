#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>> n;
    cin>> k;
    vector<int> con;
    for(int i = 0; i < n; i++){
        int sc;
        cin>> sc;
        con.push_back(sc);
    }
    int qua = 0;
    for (int i = 0; i <n; i++){
        if(con[i]==0){
            break;
        }
        if(con[i]>=con[k-1]){
            qua++;
        }

    }
    cout<< qua;
    return 0;
}