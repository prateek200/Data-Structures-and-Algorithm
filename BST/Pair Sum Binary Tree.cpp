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

#include <bits/stdc++.h>

int output[1000];
int j = 0;

void helper(BinaryTreeNode < int > * root) {
    
    if (root == NULL)
        return;
    
    output[j] = root -> data;
    j++;
    helper(root -> left);
    helper(root -> right);
}

void pairSum(BinaryTreeNode < int > * root, int sum) {
    
	helper(root);
    sort(output, output + j);
    int i = 0, k = j - 1;
    
    while (i < k) {
        int s = output[i] + output[k];
        
        if (s == sum) {
            cout << output[i] << " " << output[k] << endl;
            i++;
            k--;
        } else if (s > sum) {
            k--;
        } else if (s < sum){
            i++;
        }
    }
}
