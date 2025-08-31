#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> para;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            para.push(s[i]);
        }
        else if(s[i] == ')'){
            if(para.top() == '('){
                return true;
            }
            else{
                while(para.top() != '('){
                    para.pop();
                }
                para.pop();
            }
        }
    }
    return false;

}
