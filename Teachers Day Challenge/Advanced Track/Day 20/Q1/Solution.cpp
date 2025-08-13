#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int m, n;
        cin >> m >> n;
        if (m <= 1 && n <= 1){
            cout << 1 << endl;
        }
        else{
            if(m*n % 2 == 0){
                cout << (m*n)/2 << endl;;
            }
            else{
                cout << ((m*n)/2)+1 << endl;
            }
        }
        t--;
    
    }
    return 0;
}