#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.size()%2 != 0){
    return -1;
  }
  
  stack<char> check;
  for(int i = 0; i < str.size(); i++){
    if(check.empty()){
      check.push(str[i]);
    }
    else if(str[i] == '{'){
      check.push(str[i]);
    }
    else{
      if(check.top() == '{'){
        check.pop();
      }
      else{
        check.push(str[i]);
      }
    }
  }
  int cnt = 0;
  while(!check.empty()){
    int n = check.top();
    check.pop();
    if(n == check.top()){
      cnt++;
      check.pop();
    }
    else{
      cnt += 2;
      check.pop();
    }
  }
  return cnt;
}