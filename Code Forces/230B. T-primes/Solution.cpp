#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int limit = 1000001;
    vector<bool> isprime(limit, true);
    isprime[0] = isprime[1] = false;
    for(int i = 2; i < limit; i++)
        isprime[i] = true;
    for(int i = 2; i*i < limit; i++){
        if(isprime[i])
            for(long long j = i * i; j < limit; j += i)
                isprime[j] = false;
    }
    int n;
    cin >> n;
    while(n--){
        long long x;
        cin >> x;
        long long q = sqrt(x);
        cout << (isprime[q] && q*q == x ? "YES" : "NO") << endl;
    }
    return 0;
}