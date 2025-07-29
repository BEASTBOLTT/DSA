int getPivot(vector <int> arr, int size){
    int s = 0;
    int e = size -1;

    while (s<e){
        int mid = (s+e)/2;
        if (arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;

        }
        
    }
    return s;
}


int search(vector<int>& arr, int n, int k)
{
    int p = getPivot(arr, n);
    int s = 0;
    int e = n-1;
    if (k>=arr[p] && k<=arr[e]){
        while(p<=e){
            int mid = (p+e)/2;
            if (arr[mid] == k){
                return mid;
            }
            else if (arr[mid]< k){
                p = mid +1;
            }
            else{
                e = mid - 1;
            }
        }
        return -1;
    }
    else{
        while (s<=p){
            int mid = (s+p)/2;
            if (arr[mid] == k){
                return mid;
            }
            else if (arr[mid]< k){
                s = mid +1;
            }
            else{
                p = mid - 1;
            }
        }
        return -1;

        
    }
}
