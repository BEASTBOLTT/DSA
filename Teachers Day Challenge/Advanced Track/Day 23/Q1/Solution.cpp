#include <iostream>

using namespace std;

int main(){
    string st;
    cin >> st;
    int n = st.size();
    int ans = (26-n)*(n+1)+(n*n);
    cout << ans;
    return 0;
}