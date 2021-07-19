// Following is the given Tree node structure
/**************

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
***************/

TreeNode < int > * getNextLargerElement(TreeNode < int > * root, int n) 
{
    TreeNode < int > * ans = NULL;
    
    if (root -> data > n)
        ans = root;
    
    for (int i = 0; i < root -> children.size(); i++)
    {
        TreeNode < int > * temp = getNextLargerElement(root -> children[i], n);
        
        if (ans == NULL)
            ans = temp;
        
        else if (temp -> data < ans -> data)
            ans = temp;
    }
    
    return ans;
}
