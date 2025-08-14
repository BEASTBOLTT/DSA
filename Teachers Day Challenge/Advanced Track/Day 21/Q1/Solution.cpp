#include <iostream>
#include <stdint.h>
using namespace std;

int main(){
    
    int64_t k, n;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<n/2+1){
            cout<<2*k-1;
        }
        else{
            cout<<2*(k-n/2);
        }                                    
    }
    if(n%2==1)
    {
        if(k<(n+1)/2+1){
            cout<<2*k-1;
        }
        else{
            cout<<2*(k-(n+1)/2);
        }            
    }

    
    return 0;
}