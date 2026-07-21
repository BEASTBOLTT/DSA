/************************************************************
    Following is the Binary Search Tree node structure

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

************************************************************/

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    if (root == NULL)
    {
        return root;
    }

    TreeNode *temp = root;
    while (temp != NULL)
    {
        if (temp->data < P->data && temp->data < Q->data)
        {
            temp = temp->right;
        }
        else if (temp->data > P->data && temp->data > Q->data)
        {
            temp = temp->left;
        }
        else
        {
            return temp;
        }
    }
}