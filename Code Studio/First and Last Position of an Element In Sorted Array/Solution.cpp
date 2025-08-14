

int firstOccur(vector<int>& arr, int size, int key){
    int s = 0;
    int e = size -1;
    int ans = -1;
    

    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;

        }
        
        
    }
    return ans;
}



int lastOccur(vector<int>& arr, int size, int key){
    int s = 0;
    int e = size -1;
    int ans = -1;
    

    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;

        }
        
        
    }
    return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair <int,int> p;

    p.first = firstOccur(arr,n,k);
    p.second = lastOccur(arr,n,k);

    return p;
}
