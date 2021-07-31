/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode < int > * root) {

    if (root == NULL)
        return;

    BinaryTreeNode < int > * temp = new BinaryTreeNode < int > (root -> data);
    BinaryTreeNode < int > * left1 = root -> left;
    root -> left = temp;
    temp -> left = left1;
    insertDuplicateNode(left1);
    insertDuplicateNode(root -> right);

}
