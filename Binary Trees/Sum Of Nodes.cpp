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

int getSum(BinaryTreeNode<int>* root) 
{    
    if(root==NULL)
        return(0);
	
    int ans=root->data + getSum(root->left) + getSum(root->right);
    return(ans);
}

