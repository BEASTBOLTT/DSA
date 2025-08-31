#include <bits/stdc++.h> 

stack<int> solve(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }

    int m = myStack.top();
    myStack.pop();

    solve(myStack, x);

    myStack.push(m);
    return myStack;
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    return solve(myStack, x);

}
