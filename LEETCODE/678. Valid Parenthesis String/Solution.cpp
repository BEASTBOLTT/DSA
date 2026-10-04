class Solution
{
public:
    bool checkValidString(string s)
    {
        int ck1 = 0;
        int ck2 = 0;
        for (char x : s)
        {
            if (x == '(')
            {
                ck1++;
                ck2++;
            }
            else if (x == ')')
            {
                ck1--;
                ck2--;
            }
            else
            {
                ck1--;
                ck2++;
            }

            if (ck2 < 0)
            {
                return false;
            }
            ck1 = max(ck1, 0);
        }

        return ck1 == 0;
    }
};