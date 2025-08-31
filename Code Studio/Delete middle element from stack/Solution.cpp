#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int N, int&cnt){
   if (cnt== N/2){
      inputStack.pop();
      return;
   }

   int a = inputStack.top();
   inputStack.pop();
   cnt++;

   solve(inputStack, N, cnt);

   inputStack.push(a);

}

void deleteMiddle(stack<int>&inputStack, int N){
	
   int cnt = 0;
   solve(inputStack, N, cnt);
   
}