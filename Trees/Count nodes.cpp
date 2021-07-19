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

int getLargeNodeCount(TreeNode < int > * root, int x) {

    int c = 0;
    
    if (root -> data > x)
        c += 1;
    
    for (int i = 0; i < root -> children.size(); i++) 
    {
        c += getLargeNodeCount(root -> children[i], x);
    }
    
    return c;
}
