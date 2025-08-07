#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string st;
    cin >> st;
    unordered_map<char, int> check;
    for ( auto& x : st){
        check[x]++;
    }

    if (check.size()%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout<< "IGNORE HIM!";
    }
}