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

#include<bits/stdc++.h>

void zigZagOrder(BinaryTreeNode < int > * root) 
{
    vector < BinaryTreeNode < int > * > q;
    q.push_back(root);
    int level = 1;

    while (q.size() != 0) 
	{
        if (level % 2 == 0) 
		{
            for (int i = q.size() - 1; i >= 0; i--)
                cout << q[i] -> data << " ";
        } 
		else 
		{
            for (int i = 0; i < q.size(); i++)
                cout << q[i] -> data << " ";
        }
        
		cout << endl;
        vector < BinaryTreeNode < int > * > nawa;

        for (int i = 0; i < q.size(); i++) 
		{
            if (q[i] -> left != NULL)
                nawa.push_back(q[i] -> left);

            if (q[i] -> right != NULL)
                nawa.push_back(q[i] -> right);
        }

        q = nawa;
        level++;
    }
}
