#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long double n;
    cin >> n;
    long double ele;
    long double sum = 0;
    for (int i = 0; i < n; i++){
        cin >> ele;
        sum = ele + sum;
    }
    long double res = sum/n;
    cout<< fixed << setprecision(12)<< res;
    return 0;
}