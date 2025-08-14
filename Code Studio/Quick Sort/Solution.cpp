#include <bits/stdc++.h> 
int partition(vector<int>& arr, int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i <=e; i++){
        if (arr[i]<= pivot){
            cnt++;
        }
    }
    int pi = s+cnt;
    swap(arr[pi], arr[s]);
    int i = s;
    int j = e;
    while(i< pi && j > pi){
        while(arr[i]<= pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }
        if(i< pi && j > pi){
            swap(arr[i], arr[j]);
        }
    }
    return pi;

}
void qs(vector<int>& arr, int s, int e){
    if (s>= e){
        return;
    }
    int p = partition(arr, s, e);
    qs(arr, s, p-1);
    qs(arr, p+1, e);
}

vector<int> quickSort(vector<int> arr)
{
    int s = 0;
    int e = arr.size() -1;
    qs(arr, s, e);
    return arr;
}
