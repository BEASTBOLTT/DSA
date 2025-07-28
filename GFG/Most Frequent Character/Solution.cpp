class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char ans;
        int count;
        int max = 0;
        for (int i = 0; i< str.size(); i++){
            count = 1;
            for (int j = i+1 ; j< str.size(); j++){
                if (str[i] == str[j]){
                    count++;
                }
            }
            if (max < count){
                max = count;
                ans = str[i];
            }
            else if (max == count){
                if (ans > str[i]){
                    max = count;
                    ans = str[i];
                }
            }
        }
        return ans;
    }
