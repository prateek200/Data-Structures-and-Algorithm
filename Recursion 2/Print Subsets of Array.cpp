void print_subset(int input[], int visited[], int size, int index) 
{
    if (index == size) 
    {
        for (int i = 0; i < size; i++) 
        {
            if (visited[i])
                cout << input[i] << " ";
        }

        cout << endl;
        return;
    }

    visited[index] = 0;
    print_subset(input, visited, size, index + 1);
    
    visited[index] = 1;
    print_subset(input, visited, size, index + 1);
    visited[index] = 0;
}

void printSubsetsOfArray(int input[], int size) 
{
    int visited[size];
    print_subset(input, visited, size, 0);
}
