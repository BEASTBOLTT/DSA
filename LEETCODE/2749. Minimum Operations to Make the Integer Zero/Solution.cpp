// what we are doing in this question is that we are iterating till 60 max because its the given upper bound
// Then we are checking that if we subtract num2 in every iteration from num1 and if the new number is less the number of iterations then it isnt possible
// Then we are cheking is there any number for the number of 1s in its binary representation
// If the number is less than or equal to the iterations that took place then then it is the count we are looking for as it represents that there is some value for which if we use the eqation we get an answer
// And then finally we are returning -1



class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long x = num1 - 1LL * num2 * k;
            if (x < k) {
                return -1;
            }
            if (k >= __builtin_popcountll(x)) {
                return k;
            }
        }
        return -1;
    }
};