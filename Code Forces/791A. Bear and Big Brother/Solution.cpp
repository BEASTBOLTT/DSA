#include <iostream>

using namespace std;

int main(){
    int limak, bob;
    cin >> limak >> bob;
    int yrs = 0;
    while(limak <= bob){
        yrs++;
        limak *= 3;
        bob *= 2;
    }
    cout << yrs;
    return 0;
}