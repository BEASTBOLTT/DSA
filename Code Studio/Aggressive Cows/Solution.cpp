bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int pos = stalls[0];
    
    
    for(int i = 0; i<stalls.size(); i++) {
        if(stalls[i] - pos >= mid){
            cowCount++;
            if (cowCount == k){
                return true;
            }
            pos = stalls[i];
        }
        
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if (isPossible(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}