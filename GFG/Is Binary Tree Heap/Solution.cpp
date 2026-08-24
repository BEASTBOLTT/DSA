/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = 1 + countNodes(root->left) + countNodes(root->right);
    return ans;
}

bool isCBT(Node *root, int index, int cnt)
{
    if (root == NULL)
    {
        return true;
    }
    if (index >= cnt)
    {
        return false;
    }
    else
    {
        bool left = isCBT(root->left, 2 * index + 1, cnt);
        bool right = isCBT(root->right, 2 * index + 2, cnt);
        return (left && right);
    }
}

bool maxOrder(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->right == NULL)
    {
        return (root->data > root->left->data);
    }
    else
    {
        bool left = maxOrder(root->left);
        bool right = maxOrder(root->right);
        return (left && right && root->data > root->left->data && root->data > root->right->data);
    }
}

class Solution
{
public:
    bool isHeap(Node *tree)
    {

        int index = 0;
        int cnt = countNodes(tree);

        if (isCBT(tree, index, cnt) && maxOrder(tree))
        {
            return true;
        }
        return false;
    }
};