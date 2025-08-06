#include <iostream>
#include <vector>

using namespace std;

int main(){
    string st;
    cin>>st;
    string ans;
    bool wd = false;
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == 'W' && st[i + 1] == 'U' && st[i + 2] == 'B') {
            i += 2;
            if (wd) {
                ans.push_back(' ');
                wd = false;
            }
        } 
        else {
            ans.push_back(st[i]);
            wd = true;
        }
    }
    cout<<ans<<endl;
    return 0;
}