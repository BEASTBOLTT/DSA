#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string ele;
    cin>> ele;
    vector<int> arr;
    for(int i = 0; i < ele.size(); i++){
        if ( ele.at(i) == '1'){
            arr.push_back(1);
        }
        else if ( ele.at(i) == '2'){
            arr.push_back(2);
        }
        else if ( ele.at(i) == '3'){
            arr.push_back(3);
        }
    }
    sort(arr.begin(), arr.end());
    cout<< arr[0];
    for (int i = 1; i < arr.size(); i++){
        cout<< "+"<< arr[i];
    }
}