#include <bits/stdc++.h>

class abc 
{
    public:
    int min;
    int max;
    bool isbst;
    int maxh;
    
	abc() 
	{
        min = INT_MAX;
        max = INT_MIN;
        isbst = 1;
        maxh = INT_MIN;
    }
};

bool helper3(BinaryTreeNode < int > * root, int min = INT_MIN, int max = INT_MAX) 
{
    if (root == NULL)
        return (1);
    
	if (root -> data < min || root -> data > max)
        return (false);
    
	bool isleft = helper3(root -> left, min, root -> data - 1);
    bool isright = helper3(root -> right, root -> data, max);
    
	return (isright && isleft);
}

int helper1(BinaryTreeNode < int > * root) 
{
    if (root == NULL)
        return (0);
    
	return (1 + max(helper1(root -> left), helper1(root -> right)));
}

void helper(BinaryTreeNode < int > * root, abc * a) 
{
    if (root == NULL)
        return;
    
	if (a -> min > root -> data)
        a -> min = root -> data;
    
	if (a -> max < root -> data)
        a -> max = root -> data;
    
	bool ans = helper3(root);
    
	if (ans == 0)
        a -> isbst = 0;
    
	if (ans == 1)
	 {
        int s = helper1(root);
        
		if (s > a -> maxh)
            a -> maxh = s;
    }
    
    helper(root -> left, a);
    helper(root -> right, a);
}

int largestBSTSubtree(BinaryTreeNode < int > * root) 
{
    abc * a1 = new abc();
    abc * a2 = new abc();
    
	helper(root -> left, a1);
    helper(root -> right, a2);
    
	if (a1 -> isbst == 1 && a2 -> isbst == 1 && a1 -> max < root -> data && a2 -> min >= root -> data)
        return (max(a1 -> maxh, a2 -> maxh) + 1);
    else
        return (max(a1 -> maxh, a2 -> maxh));
}
