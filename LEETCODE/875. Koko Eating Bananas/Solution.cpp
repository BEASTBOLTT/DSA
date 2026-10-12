class Solution
{
private:
    bool suffice(int mid, vector<int> &piles, int h)
    {
        int check = 0;
        for (int x : piles)
        {
            check += x / mid;
            if (x % mid != 0)
            {
                check++;
            }
            if (check > h)
            {
                return false;
            }
        }
        return check <= h;
    }

public:
    int minEatingSpeed(vector<int> &piles, int h)
    {

        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = e;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (suffice(mid, piles, h))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};