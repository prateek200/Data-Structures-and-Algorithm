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

void printIthNode(Node * head, int i) 
{
    if (head == NULL)
        return;
    
    if (i == 0) 
    {
        cout << head -> data;
        return;
    }
    
    printIthNode(head -> next, i - 1);
}
