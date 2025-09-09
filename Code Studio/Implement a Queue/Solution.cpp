#include <bits/stdc++.h> 
class Queue {
public:
    vector<int> q = {};
    int frnt = 0;
    int rear = 0;
    Queue() {
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(frnt == rear){
            return true;
            frnt = rear = 0;
        }
        return false;
    }

    void enqueue(int data) {
        q.push_back(data);
        rear++;
    }

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        
        frnt++;
        return q[frnt-1];
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        return q[frnt];
    }
};