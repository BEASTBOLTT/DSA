#include <iostream>

using namespace std;

int main(){
    string st;
    cin >> st;
    int start = 'a' - 96;
    int clk;
    int aclk;
    int rot = 0;
    for(int i = 0; i < st.size(); i++){
        int des = st[i] - 96;
    
        if (start == des){
            continue;
        }
        else if(start < des){
            clk = des - start;
            aclk = start + (26 - des);
            
        }
        else{
            clk = des + (26 - start);
            aclk = start - des;
            
        }

        rot += min(clk, aclk);
        
        start = st[i] - 96;
    
    }
    cout << rot;


    return 0;
}