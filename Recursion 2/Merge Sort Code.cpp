void merge(int input[], int start, int mid, int end) {

    int size = end - start + 1;
    int start1 = start;
    int temp[size];

    int k = mid + 1;
    int pos = 0;

    while (start <= mid && k <= end) {

        if (input[start] < input[k]) {

            temp[pos] = input[start];
            start++;
            pos++;

        } else {

            temp[pos] = input[k];
            k++;
            pos++;
        }

    }

    while (start <= mid) {

        temp[pos] = input[start];
        start++;
        pos++;

    }

    while (k <= end) {

        temp[pos] = input[k];
        k++;
        pos++;

    }

    for (int i = start1; i <= end; i++) {
        input[i] = temp[i - start1];
    }

}

void mergesort(int input[], int start, int end) {

    if (start >= end)
        return;

    int mid = (start + end) / 2;

    mergesort(input, start, mid);
    mergesort(input, mid + 1, end);
    merge(input, start, mid, end);

}

void mergeSort(int input[], int size) {
    
    mergesort(input, 0, size - 1);

}
