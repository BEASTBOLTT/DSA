#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >>n;
    int mxind = 0;
    int mxh = 0;
    int mnind = 0;
    int mnh = INT_MAX;
    int ele;
    for(int i = 0; i < n; i++){
        cin >> ele;
        if(ele > mxh){
            mxind = i;
            mxh = ele;
        }
        if(ele <= mnh){
            mnind = i;
            mnh = ele;
        }
    }

    if (mxind > mnind){
        cout << mxind + (n - 1 - mnind) -1;
    }
    else{
        cout << mxind + (n - 1 - mnind);
    }
    return 0;
}