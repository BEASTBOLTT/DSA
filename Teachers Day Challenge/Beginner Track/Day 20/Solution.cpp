#include <iostream>

using namespace std;

int main(){
    string t, s;
    cin >> t >> s;
    if(t.size() != s.size())
    cout << "NO";
    else{
        string ans;
        int i = 0;
        int j = s.size()-1;
        while(i < t.size() && j >=0){
            if(t[i] != s[j]){
                ans = "NO";
                break;
            }
            else{
                ans = "YES";
                i++;
                j--;
            }
        }
        cout << ans;
    }
    
    return 0;
}