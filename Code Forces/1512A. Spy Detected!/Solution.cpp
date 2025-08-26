#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr;
        for(int i = 0; i < n; i++){
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        if(arr[0] == arr[1]){
            for(int i = 2; i < n; i++){
                if(arr[i] != arr[0]){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        else if(arr[2] == arr[0]){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}