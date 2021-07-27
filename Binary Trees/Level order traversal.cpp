/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
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

***********************************************************/

void printLevelWise(BinaryTreeNode<int> *root) {
    
    queue<BinaryTreeNode<int> *> q; 
    
    if(root != NULL)
    	q.push(root); 
    
    while(q.size() > 0)
    {
     	int n = q.size(); 
        
        while(n>0)
        {
        	 
            BinaryTreeNode<int> *temp= q.front(); 
            q.pop();
        	
            cout<<temp->data<<" ";
            
            if(temp->left != NULL)
                q.push(temp->left);
            
            if(temp->right != NULL)
                q.push(temp->right);
			
            n--;
        }
        
        cout<<endl;
    }
}
