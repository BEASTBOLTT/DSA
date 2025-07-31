#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> ab;
    string w;
    for(int i=0; i<n; i++){
        cin>>w;
        ab.push_back(w);
    }
    for(int i=0; i<n; i++){
        if(ab[i].size() <= 10){
            cout<< ab[i] << endl;
        }
        else{
            cout<< ab[i][0];
            cout<< ab[i].size() - 2;
            cout<< ab[i][ab[i].size() - 1] << endl;
        }
    }

}