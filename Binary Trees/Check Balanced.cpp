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

pair<bool,int> helper(BinaryTreeNode<int> *root){
    
    if(root ==NULL)
        return make_pair(true,0);
	
    pair<bool,int> x = helper(root->left);
    pair<bool,int> y = helper(root->right);
    
    bool ans = false;
    
    if(x.second - y.second == 0 or x.second - y.second == 1 )
        ans=true;
    else if(y.second - x.second == 0 or y.second - x.second == 1 )
        ans=true;
    
    return make_pair(x.first && y.first && ans, 1 + max(x.second,y.second));
}

bool isBalanced(BinaryTreeNode<int> *root) {
    pair<bool,int> ans = helper(root);
    return ans.first;
}

