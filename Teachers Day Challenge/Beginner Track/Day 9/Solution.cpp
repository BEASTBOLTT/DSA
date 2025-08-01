#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int count = 0;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = 1; j<=3; j++){
            int ele;
            cin>> ele;
            sum = sum + ele;
        }
        if(sum >=2){
            count++;
        }
    }
    cout<< count;
    return 0;
}