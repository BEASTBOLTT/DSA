#include <iostream>
#include <vector>

using namespace std;



int main(){
    int n;
    cin >> n;
    int up= 0;
    int down= 0;
    bool s(false);
    for (int x, y; cin >> x >> y;)
    {
        if (n == 1 and x % 2 + y % 2 == 1)
        {
            cout << -1;
            return 0;
        }
        if (y % 2 + x % 2 == 1)
            s = true;
        up+= x;
        down+= y;
    }
    if (up% 2 == 0 and down% 2 == 0){
        cout << 0 << endl;
    }
    else if (up% 2 == 1 and down% 2 == 1 and s){
        cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }


    return 0;
}