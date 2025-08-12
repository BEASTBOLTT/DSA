#include <iostream>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np; 
    cin >> n>> k>> l>> c>> d>> p>> nl>> np;
    int totalSoftDrink = k*l;
    int totalLimeSlices = c*d;
    cout << min((totalSoftDrink/nl)/n, min(totalLimeSlices/n, (p/np)/n));


    return 0;
}