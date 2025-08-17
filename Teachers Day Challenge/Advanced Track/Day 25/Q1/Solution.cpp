#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int L = s.size();
    int index = (1 << L) - 1;

    int check = 0;
    for (char c : s) {
        check <<= 1;
        if (c == '7') check |= 1;
    }

    cout << index + check;
    return 0;
}