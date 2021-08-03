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

int s = 0;

void helper(BinaryTreeNode < int > * root) 
{
    if (root == NULL)
        return;
    
	helper(root -> right);
    
	s += root -> data;
	root -> data = s;
    
	helper(root -> left);
}

void replaceWithLargerNodesSum(BinaryTreeNode < int > * root) 
{
    helper(root);
}
