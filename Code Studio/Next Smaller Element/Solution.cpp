#include<stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> check;
    check.push(-1);
    vector<int> ans(n);
    for(int i = n-1; i >=0; i--){
        while(check.top() >= arr[i]){
            check.pop();
        }
        ans[i] = check.top();
        check.push(arr[i]);
    }
    return ans;
}