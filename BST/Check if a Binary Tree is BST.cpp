#include<bits/stdc++.h>

bool isBST(BinaryTreeNode < int > * root, int mini = INT_MIN, int maxi = INT_MAX) 
{
    if (root == NULL)
        return true;

    if (root -> data < mini || root -> data > maxi)
        return false;

    return isBST(root -> left, mini, root -> data) &
        isBST(root -> right, root -> data, maxi);
}
