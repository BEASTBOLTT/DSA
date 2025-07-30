int bs(vector<int> &nums, int s, int e, int target){
    if(s > e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(nums[mid]== target){
        return mid;
    }
    else if(nums[mid] < target){
        bs(nums, mid + 1 , e, target);
    }
    else{
        bs(nums, s , mid - 1, target);
    }
}

int search(vector<int> &nums, int target) {
    int n = nums.size();
    int s = 0;
    int e = n-1;
    int ans = bs(nums,s,e,target);
    return ans;
}