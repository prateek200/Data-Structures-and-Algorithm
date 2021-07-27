/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

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

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/

vector < Node < int > * > constructLinkedListForEachLevel(BinaryTreeNode < int > * root) 
{
    Node < int > * temp = NULL;
    vector < Node < int > * > a;
    queue < BinaryTreeNode < int > * > list;

    if (root != NULL)
        list.push(root);
    
	while (list.size() != 0) 
	{    
		int n = list.size();
        
		for (int i = 0; i < n; i++) 
		{    
			BinaryTreeNode < int > * front = list.front();
            list.pop();
            
			if (i == 0) 
			{
                temp = new Node < int > (front -> data);
                a.push_back(temp);
            }
            
			if (i > 0) 
			{
                Node < int > * temp1 = new Node < int > (front -> data);
                temp -> next = temp1;
                temp = temp1;
            }
            
			if (front -> left != NULL)
                list.push(front -> left);
            
			if (front -> right != NULL)
                list.push(front -> right);
        }
    }
    
    return (a);
}
