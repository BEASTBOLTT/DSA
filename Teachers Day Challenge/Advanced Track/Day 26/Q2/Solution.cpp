#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int s1;
    cin >> s1;
    vector<int> s1Cards;
    for(int i = 0; i < s1; i++){
        int ele;
        cin >> ele;
        s1Cards.push_back(ele);
    }
    int s2;
    cin >> s2;
    vector<int> s2Cards;
    for(int i = 0; i < s2; i++){
        int ele;
        cin >> ele;
        s2Cards.push_back(ele);
    }

    if(s1 == 0 || s2 == 0){
        cout << -1;
        return 0;
    }

    vector<int> a = s1Cards;
    vector<int> b = s2Cards;

    int cnt = 0;
    while(a.size() > 0 && b.size() > 0){
        if(a[0] > b[0]){
            a.push_back(b[0]);
            a.push_back(a[0]);
            b.erase(b.begin());
            a.erase(a.begin());
            cnt++;
        }
        else{
            b.push_back(a[0]);
            b.push_back(b[0]);
            a.erase(a.begin());
            b.erase(b.begin());
            cnt++;
        }
        if(a == s1Cards && b == s2Cards){
            cout << -1;
            return 0;
        }
        if(cnt >100000){
            cout << -1;
            return 0;
        }
    }

    if(a.size() == 0){
        cout << cnt << " "<< 2;
    }
    else{
        cout << cnt << " " << 1;
    }
    return 0;
}