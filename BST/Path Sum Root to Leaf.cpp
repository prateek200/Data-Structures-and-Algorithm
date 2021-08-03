// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/

void helper(BinaryTreeNode < int > * root, int k, int * output, int m) 
{
    if (root == NULL)
        return;
    
    if (root -> left == NULL && root -> right == NULL)
    {
        if (k == root -> data) 
        {
            for (int i = 0; i < m; i++)
                cout << output[i] << " ";
            
            cout << root -> data << endl;
        }
    }

    output[m] = root -> data;
    m++;
    k -= root -> data;
    helper(root -> left, k, output, m);
    helper(root -> right, k, output, m);
}

void rootToLeafPathsSumToK(BinaryTreeNode < int > * root, int k) 
{
    int * output = new int[1000];
    helper(root, k, output, 0);
}
