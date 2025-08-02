class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> marr;
        for (int i = 0; i < nums1.size(); i++){
            marr.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++){
            marr.push_back(nums2[i]);
        }
        sort(marr.begin(), marr.end());
        int n = marr.size();
        if(n%2==0){
            return double((marr[(n/2)-1] + marr[(n/2)])/2);
        }
        else{
            return double(marr[n/2]);
        }
    }
};