#include <iostream>

using namespace std;

int main(){
    string st;
    cin>>st;
    for (auto& x : st) {
        x = tolower(x);
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y' ){
            continue;
        }
        else{
            cout<<'.'<<x;
        }
    }
    return 0;
}