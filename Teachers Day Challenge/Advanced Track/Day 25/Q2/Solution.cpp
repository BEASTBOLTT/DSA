#include <iostream>

using namespace std;

int main(){
    
    int n , m;
    cin >> n >> m;
    int i = 1;
    int j1 = 1;
    int j2 = 1;
    while(i<=n){
        while(j1 <= m){
            cout << "#";
            j1++;
        }
        
        cout << endl;
        
        i++;
        if(i > n){
            break;
        }
        while(j2 < m){
            cout << ".";
            j2++;
        }
        cout << "#" << endl;
        
        i++;
        if(i > n){
            break;
        }
        while(j1 > 1){
            cout << "#";
            j1--;
        }
        cout << endl;
        
        i++;
        if(i > n){
            break;
        }
        cout << "#";
        while(j2 > 1){
            cout << ".";
            j2--;
        }
        cout << endl;
        i++;
    }

    return 0;
}