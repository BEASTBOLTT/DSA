#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


void solve() {
    int n, x, a[100001], M, m1, m2;;
    unsigned long long int sum = 0,sum1 = 0,sum2 = 0;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum % x != 0){
        cout<<n<<endl;
    }
    else{
        m1 = m2 = n;
        sum1 = sum2 = sum;
        for(int i=n-1; i>=0; i--){
            if((sum1 - a[i])% x != 0 ){
                m1--;
                sum1 -= a[i];
                break;
            }
            else{
                sum1 -= a[i];
                m1--;
            }
        }
        for(int i=0; i<n; i++){
            if((sum2 - a[i]) % x != 0){
                m2--;
                sum2 -= a[i];
                break;
            }
            else{
                sum2 -= a[i];
                m2--;
            }
        }
        M = max(m1,m2);
        sum = max(sum1,sum2);
        if(sum % x != 0){
            cout<<M<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}