#include <bits/stdc++.h> 

void insertSorted(stack<int> &stack, int n){
	if(stack.empty()  ||  stack.top() < n){
		stack.push(n);
		return;
	}
	
	int m = stack.top();
	stack.pop();
	
	insertSorted(stack, n);

	stack.push(m);
	
}


void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int n = stack.top();
	stack.pop();

	sortStack(stack);

	insertSorted(stack, n);
}