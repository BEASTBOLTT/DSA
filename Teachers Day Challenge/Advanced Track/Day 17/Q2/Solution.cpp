#include <iostream>

using namespace std;

int main(){
    int n ,m ,a ,b;
    cin >> n >> m >> a >> b;
    int total;
    if (m*a > b){
        if ((n%m)*a < b){
            total = (n/m*b) + ((n-n/m*m)*a);
        }
        else{
            total = ((n/m) + 1) *b;
        }
    }
    else{
        total = n*a;
    }
    cout << total;
    return 0;
}