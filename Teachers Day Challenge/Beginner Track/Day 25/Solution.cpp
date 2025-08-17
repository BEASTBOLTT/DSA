#include <iostream>

using namespace std;

int main(){
    int ucount = 0;
    int lcount =0;
    string st;
    cin>>st;
    for (auto& x : st) {
        if(isupper(x)){
            ucount++;
        }
        else{
            lcount++;
        }
    }
    if(ucount <= lcount){
        for(auto& x : st){
            x = tolower(x);
        }
    }
    else{
        for(auto& x : st){
            x = toupper(x);
        }
    }
    cout<< st;

    return 0;
}