
void bottom(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int m = myStack.top();
    myStack.pop();

    bottom(myStack, x);

    myStack.push(m);
}

void reverse(stack<int> &stack){
    if(stack.empty()){
        return;
    }

    int n = stack.size();
    int m = stack.top();
    stack.pop();

    reverse(stack);

    bottom(stack, m);
}

void reverseStack(stack<int> &stack) {
    reverse(stack);
}