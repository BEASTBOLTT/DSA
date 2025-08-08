#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin >> n >>m;
    int ele;
    int th = 1;
    long long int cnt = 0;
    for(int i = 0; i < m; i ++){
        cin >> ele;
        if(ele < th){
            cnt = cnt + (n - th) + ele;
            th = ele;
        }
        else{
            cnt = cnt + ele - th;
            th = ele;
        }
    }
    
    cout << cnt;
    return 0;
}