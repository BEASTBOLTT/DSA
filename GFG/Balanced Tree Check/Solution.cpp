/*

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
    private:
        
        pair<bool, int> solve(Node* root){
            if(root == NULL){
                pair<bool, int> p = make_pair(true, 0);
                return p;
            }
            
            pair<bool, int> l = solve(root->left);
            pair<bool, int> r = solve(root->right);
            
            bool left = l.first;
            bool right = r.first;
            bool check = abs(l.second - r.second) <= 1;
            pair<bool, int> ans;
            ans.second = max(l.second, r.second) + 1;
            if(left && right && check){
                ans.first = true;
            }
            else{
                ans.first = false;
            }
            
            return ans;
            }
  public:
    bool isBalanced(Node* root) {
        return solve(root).first;
        
    }
};