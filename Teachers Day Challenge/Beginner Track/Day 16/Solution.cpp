#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int mat[5][5];
    int i,j;
    int ele;
    for(int m = 0; m<5; m++){
        for(int n = 0; n<5; n++){
            cin >> ele;
            if(ele == 1){
                i = m+1;
                j = n+1;
            }
            mat[m][n] = ele;
        }
       }  
       cout<< (abs(i-3)+ abs(j-3));
    return 0;
}