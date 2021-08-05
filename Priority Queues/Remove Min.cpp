#include <vector>

/*******************
 * Main function -
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
            case 2 : // getMin
                cout << pq.getMin() << endl;
                break;
            case 3 : // removeMin
                cout << pq.removeMin() << endl;
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
**************************/

class PriorityQueue
{
    vector < int > pq;

    public:

        PriorityQueue() 
		{

        }

    bool isEmpty() 
	{
        return pq.size() == 0;
    }

    // Return the size of priorityQueue - no of elements present
    int getSize() 
	{
        return pq.size();
    }

    int getMin() 
	{
        if (isEmpty()) 
		{
            return 0; // Priority Queue is empty
        }
        
		return pq[0];
    }

    void insert(int element) 
	{
        pq.push_back(element);
        int childIndex = pq.size() - 1;

        while (childIndex > 0) 
		{
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) 
			{
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } 
			else 
			{
                break;
            }
            
			childIndex = parentIndex;
        }

    }

    int removeMin() 
	{
        int rem = pq.size() - 1;
        int ret = pq[0];
        pq[0] = pq[rem];
        pq.pop_back();
        int min = 0, next1, next2;
        
		while (true) 
		{
            next1 = (2 * min) + 1;
            next2 = (2 * min) + 2;
            
			if (next1 >= rem && next2 >= rem)
			{
                break;
        	}
			else if (next1 < rem && next2 >= rem)
			{
                if (pq[next1] < pq[min]) 
				{
                    int temp = pq[next1];
                    pq[next1] = pq[min];
                    pq[min] = pq[next1];
                } 
				else
                {
                    break;
                }
            } 
			else if (next1 < rem && next2 < rem) 
			{
                int k = pq[next1];
                int f = pq[next2];
                
				if (pq[min] <= k && pq[min] <= f)
                {
                    break;
            	}
				else if (k < f && pq[min] > k) 
				{
                    pq[next1] = pq[min];
                    pq[min] = k;
                    min = next1;
                } 
				else if (f < k && pq[min] > f) 
				{
                    pq[next2] = pq[min];
                    pq[min] = f;
                    min = next2;
                }
            } 
			else
                break;
        }
        
        return (ret);
    }

};
