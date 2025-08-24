#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map <string, int> names;

    for(int i = 0; i < n; i++){
        string st;
        cin >> st;
        bool returned = false;
        if (names.find(st) == names.end()){
            names[st] = 0;
            cout << "OK" << endl;
        }
        else{
            names[st]++;
            cout << st << names[st] << endl;
        }
        

    }
    return 0;
}