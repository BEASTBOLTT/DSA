#include <iostream>
 
using namespace std;
 
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int b = m;
    int p = k;
    int wd= 0;
    for (int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        if(ele == 1){
            if(b > 0){
                b--;
            }
            else{
                wd++;
            }
        }
        else{
            if (p > 0){
                p--;
            }
            else if(b > 0){
                b--;
            }
            else{
                wd++;
            }
        }

    }
    cout << wd;


    return 0;
 
}