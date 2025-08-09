#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ele;
    vector<int> cards;
    for(int i = 0; i < n; i++){
        cin >> ele;
        cards.push_back(ele);
    }
    int sereja = 0;
    int dima = 0;
    int i = 0;
    int j = n-1;
    int cnt = 0;
    while(i <= j ){
        if(cnt%2 == 0){
            if(cards[i]>cards[j]){
                sereja = sereja + cards[i];
                i++;
            }
            else{
                sereja = sereja + cards[j];
                j--;
            }
        }
        else{
            if(cards[i]>cards[j]){
                dima = dima + cards[i];
                i++;
            }
            else{
                dima = dima + cards[j];
                j--;
            }
        }
        cnt++;
    }
    
    cout << sereja << " " << dima;
    return 0;
}