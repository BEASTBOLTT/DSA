/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        
        map<int,vector<int>> topNode;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        
        while(!q.empty()){
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            
            topNode[hd].push_back(frontNode->data);
            
            if(frontNode->left){
                q.push({frontNode->left, hd-1});
            }
            if(frontNode->right){
                q.push({frontNode->right, hd+1});
            }
            
        }
        
        for(auto &i: topNode){
            ans.push_back(i.second);
        }
        
        return ans;
        
    }
};