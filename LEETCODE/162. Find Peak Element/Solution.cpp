class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int s = 0;
        int n = nums.size();
        if (n == 1)
        {
            return 0;
        }
        else if (n == 2)
        {
            if (nums[0] > nums[1])
            {
                return 0;
            }
            return 1;
        }
        int e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            {
                if (mid == n - 1)
                {
                    if (nums[mid - 1] < nums[mid])
                    {
                        return mid;
                    }
                    return mid - 1;
                }
                if (mid == 0)
                {
                    if (nums[mid] > nums[mid + 1])
                    {
                        return mid;
                    }
                    return mid + 1;
                }
                if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
                {
                    return mid;
                }
                else if (nums[mid - 1] > nums[mid])
                {
                    e = mid - 1;
                }
                else if (nums[mid] < nums[mid + 1])
                {
                    s = mid + 1;
                }
            }
        }
        return -1;
    }
};