/***************
 * Following is the main function that er are using internally
 *
 
int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;
    while(choice != -1) {
        switch(choice) {
            case 1 : // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2 : // getMax
                cout << pq.getMax() << endl;
                break;
            case 3 : // removeMax
                cout << pq.removeMax() << endl;
                break;
            case 4 : // size
                cout << pq.getSize() << endl;
                break;
            case 5 : // isEmpty
                if(pq.isEmpty()) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
            default :
                return 0;
        }
        cin >> choice;
    }
}
*******************/
#include <vector>

#include <bits/stdc++.h>

class PriorityQueue 
{
    public:
    vector < int > a;
    
	int getSize() 
	{
        return (a.size());
    }

    int isEmpty() 
	{
        return (a.size() == 0);
    }

    int getMax() 
	{
        if (a.size() == 0)
            return (INT_MIN);
        else
            return (a[0]);
    }

    void insert(int x) 
	{
        a.push_back(x);
        int chi = a.size() - 1;
        int par;
        
		while (chi > 0) 
		{
            par = (chi - 1) / 2;
            
			if (a[par] < a[chi]) 
			{
                int temp = a[chi];
                a[chi] = a[par];
                a[par] = temp;
                chi = par;
            } 
			else
                break;
        }
    }

    int removeMax() 
	{
        if (a.size() == 0)
            return (INT_MIN);
        
		int ans = a[0];
        int rem = a.size() - 1;
        
		a[0] = a[rem];
        a.pop_back();
        
		int min = 0;
        
		while (true) 
		{
            int next1 = (min * 2) + 1;
            int next2 = (min * 2) + 2;
            
			if (next1 >= rem && next2 >= rem)
			{
                break;
			}
			
			if (next1 < rem && next2 >= rem) 
			{
                if (a[next1] > a[min]) 
				{
                    int temp = a[next1];
                    a[next1] = a[min];
                    a[min] = temp;
				}
                break;
            }
            
            if (next1 < rem && next2 < rem) 
			{
                int k = a[next1];
                int f = a[next2];
                
				if (a[min] > k && a[min] > f)
				{
                    break;
            	}
				else if (k > f && a[min] < k) 
				{
                    a[next1] = a[min];
                    a[min] = k;
                } 
				else if (f > k && a[min] < f) 
				{
                    a[next2] = a[min];
                    a[min] = f;
                } else
                    break;
            }
        }
        
        return (ans);
    }
};W
