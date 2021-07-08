/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

int findNode(Node * head, int n) 
{
    Node * temp = head;
    int c = 0;
    
    while (temp != NULL) 
    {
        if (temp -> data == n) 
        {
            return c;
        }
        else
        {
            c++;
            temp = temp -> next;
        }
    }
    
    if (temp == NULL)
        return -1;
}
