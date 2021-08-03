/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/

int output[1000];
int j = 0;

void helper(BinaryTreeNode < int > * root) 
{
    if (root == NULL)
        return;
    
	helper(root -> left);
    output[j] = root -> data;
    j++;
    
	helper(root -> right);
}

void printNodesSumToS(BinaryTreeNode < int > * root, int sum) 
{
    helper(root);
    
	int i = 0, k = j - 1;
    
	while (i < k) 
	{
        int s = output[i] + output[k];
        
		if (s == sum) 
		{
            cout << output[i] << " " << output[k] << endl;
            i++;
            k--;
        } 
		else if (s > sum)
		{
            k--;
        } else if (s < sum)
        {
            i++;
    	}
    }
}
