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

BinaryTreeNode < int > * removeLeafNodes(BinaryTreeNode < int > * root) {

    if (root == NULL || (root -> left == NULL && root -> right == NULL))
        return NULL;

    root -> left = removeLeafNodes(root -> left);
    root -> right = removeLeafNodes(root -> right);

    return root;

}
