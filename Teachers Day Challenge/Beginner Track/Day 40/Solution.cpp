#include <iostream>

using namespace std;

int main(){
    int count = 0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int p, q;
        cin>>p>>q;
        if(q-p >=2){
            count++;
        }
    }
    cout<< count;

    return 0;
}