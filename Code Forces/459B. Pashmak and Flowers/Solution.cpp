#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> flowers;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        flowers.push_back(ele);
    }

    sort(flowers.begin(), flowers.end());

    long long mxdiff = flowers[n-1] - flowers[0];
    if(flowers[0] == flowers[n-1]){
        long long cnt = 0;
        for(int i = 0; i < n; i++){
            cnt = cnt + i;
        }
        cout << 0 << " " << cnt;
    }
    else{
        long long cntmn = 1;
        long long cntmx = 1;
        for(int i = 1; i < n; i++){
            if(flowers[0] == flowers[i]){
                cntmn++;
            }
            else{
                break;
            }
        }
        for(int i = n-2; i >= 0; i--){
            if(flowers[n-1] == flowers[i]){
                cntmx++;
            }
            else{
                break;
            }
        }

        
        cout << mxdiff << " " << cntmn*cntmx;
    }
    
    return 0;
}