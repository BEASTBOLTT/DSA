#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long int x, y, z;
        cin >> x >> y >> z;
        long long int a = 0;
        long long int b = 0;
        long long int c = 0;
        if(x==y){
            b=x;
        }
        if(x==z){
            a=x;
        }
        if(y==z)
        {
            c=z;
        }
        if(b==0){
            b=min(x,y);
        }
        if(a==0){
            a=min(x,z);
        }
        if(c==0){
            c=min(y,z);
        }
        if(max(a,b)!=x || max(b,c)!=y || max(a,c)!=z){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }

    return 0;
}
