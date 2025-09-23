/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        
        bool leftToRight = true;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            vector<int> res(n);
            for(int i = 0; i < n; i++){
                Node * frontnode = q.front();
                q.pop();
                
                int index;
                if(leftToRight){
                    index = i;
                }
                else{
                    index = n - i -1;
                }
                res[index] = frontnode->data;
                
                if(frontnode->left){
                    q.push(frontnode->left);
                }
                if(frontnode->right){
                    q.push(frontnode->right);
                }
            }
            leftToRight = !leftToRight;
            
            for(auto &i : res){
                ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};