int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to sort an array using qsort
void sortArray(int *arr, int n) {
    qsort(arr, n, sizeof(int), compare);
}


//manual
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose last element as pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]); // Place pivot in the right position
    return i + 1;
}

// Recursive Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Sort function that calls quickSort
void my_qsort(int *arr, int n) {
    quickSort(arr, 0, n - 1);
}
