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

TreeNode < int > * a = NULL;
int k = -1000000;
int sec = -100000;

void largest(TreeNode < int > * root)
{	
    for (int i = 0; i < root -> children.size(); i++)
        largest(root -> children[i]);
    
	if (root -> data > k)
	{
        k = root -> data;
    }
}
void secongd(TreeNode < int > * root)
{	
    for (int i = 0; i < root -> children.size(); i++)
        secongd(root -> children[i]);
    
	if (root -> data < k && root -> data > sec)
	{
        a = root;
        sec = root -> data;
    }
}
TreeNode < int > * getSecondLargestNode(TreeNode < int > * root)
{
    largest(root);
    secongd(root);
    return (a);
}
