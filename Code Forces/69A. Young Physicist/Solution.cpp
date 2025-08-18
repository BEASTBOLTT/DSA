#include <iostream>

using namespace std;

int main(){
    int f;
    cin >> f;
    int fx = 0;
    int fy = 0;
    int fz = 0;
    while(f>0){
        int x, y, z;
        cin >> x >> y >> z;
        fx += x;
        fy += y;
        fz += z;

        f--;
    
    }
    if (fx == 0 && fy == 0 && fz == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}