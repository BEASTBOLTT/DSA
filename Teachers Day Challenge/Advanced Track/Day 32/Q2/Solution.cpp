#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {

    int n;
    cin >> n;
    vector<int> boxes;

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        boxes.push_back(ele);
    }
    sort(boxes.begin(), boxes.end());
    
    for(int i : boxes){
        cout << i << " ";
    }

    return 0;
}