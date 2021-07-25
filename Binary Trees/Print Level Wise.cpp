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

queue < BinaryTreeNode < int > * > q;

void printLevelWise(BinaryTreeNode < int > * root) {

    q.push(root);

    while (q.size() != 0) {

        int l = -1, r = -1;
        BinaryTreeNode < int > * top = q.front();
        q.pop();

        if (top -> left != NULL) {

            l = top -> left -> data;
            q.push(top -> left);

        }

        if (top -> right != NULL) {

            r = top -> right -> data;
            q.push(top -> right);

        }

        cout << top -> data << ":" << "L:" << l << ",R:" << r << endl;

    }

}
