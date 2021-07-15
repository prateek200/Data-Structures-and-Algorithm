/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/
class node 
{
    public:
    long long int data;
    node * next;
    node * prev;

    node(int d) 
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
    
    ~node() 
    {
        delete next;
        delete prev;
    }
};

class Deque 
{
    public:
    node * head;
    node * tail;
    int size;
    int totalsize;

    Deque(int q) 
    {
        head = NULL;
        tail = NULL;
        size = 0;
        totalsize = q;
    }
    
    void insertFront(int data) 
    {
        if (size >= totalsize) 
        {
            cout << -1 << endl;
            return;
        }
        
        node * temp = new node(data);
        
        if (size == 0) 
        {
            head = temp;
            tail = temp;
            size++;
            return;
        }
        
        head -> prev = temp;
        temp -> next = head;
        head = temp;
        size++;
    }
    
    void insertRear(int data) 
    {
        if (size >= totalsize) 
        {
            cout << -1 << endl;
            return;
        }
        
        node * temp = new node(data);
        
        if (size == 0) 
        {
            head = temp;
            tail = temp;
            size++;
            return;
        }
        
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
        size++;
    }
    
    void deleteFront() 
    {
        if (size == 0) 
        {
            cout << -1 << endl;
            return;
        }
        
        if (size == 1) 
        {
            //    delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        
        node * temp = head -> next;
        temp -> prev = NULL;
        head = temp;
        size--;

    }
    
    void deleteRear() 
    {
        if (size == 0) 
        {
            cout << -1 << endl;
            return;
        }
        
        if (size == 1) 
        {
            //      delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        
        node * temp = tail -> prev;
        temp -> next = NULL;
        // delete tail; 
        tail = temp;
        size--;
    }
    
    int getFront() 
    {
        if (size == 0) 
        { 
            return (-1);
        }
        return (head -> data);
    }
    
    int getRear() 
    {
        if (size == 0) 
        { 
            return (-1);
        }
        return (tail -> data);
    }
};
