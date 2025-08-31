bool isValidParenthesis(string s)
{
    stack <char> para;

    for(int i = 0; i < s.size(); i++){
        if((s[i] == ')' || s[i] == '}' || s[i] == ']') && para.empty()){
            return false;
        }
        if(s[i] == ')'){
            if(para.top() != '('){
                return false;
            }
            else{
                para.pop();
            }
        }
        else if(s[i] == '}'){
            if(para.top() != '{'){
                return false;
            }
            else{
                para.pop();
            }
        }
        else if(s[i] == ']'){
            if(para.top() != '['){
                return false;
            }
            else{
                para.pop();
            }
        }
        else{
            para.push(s[i]);
        }
    }
    if(!para.empty()){
        return false;
    }
    return true;
}