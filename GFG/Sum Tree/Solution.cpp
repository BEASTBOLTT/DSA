/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
    private:
        pair<bool, int> solve(Node* root){
            if(root == NULL){
                pair<bool, int> p = make_pair(true, 0);
                return p;
            }
            if(root->left == NULL && root->right == NULL){
                pair<bool, int> p = make_pair(true, root->data);
                return p;
            }
            
            pair<bool, int> l = solve(root->left);
            pair<bool, int> r = solve(root->right);
            
            bool left = l.first;
            bool right = r.first;
            bool check = (l.second + r.second) == root->data;
            
            pair<bool, int> ans;
            
            if(left && right && check){
                ans.first = true;
                ans.second = 2*root->data;
            }
            else{
                ans.first = false;
            }
            
            return ans;
        }
  public:
    bool isSumTree(Node* root) {
        return solve(root).first;
    }
};