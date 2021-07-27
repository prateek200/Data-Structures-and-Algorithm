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

#include <queue>

void printNodesWithoutSibling(BinaryTreeNode < int > * root) 
{
    int i, n;
    queue < BinaryTreeNode < int > * > a;
    a.push(root);
    
	while (a.size() != 0) 
	{
        n = a.size();
        
		for (i = 0; i < n; i++) 
		{
            BinaryTreeNode < int > * front = a.front();
            a.pop();
            
			if (front -> left != NULL && front -> right == NULL)
                cout << front -> left -> data << " ";

            if (front -> right != NULL && front -> left == NULL)
                cout << front -> right -> data << " ";

            if (front -> left != NULL)
                a.push(front -> left);
            
			if (front -> right != NULL)
                a.push(front -> right);
        }
    }
}
