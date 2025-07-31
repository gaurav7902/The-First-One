int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to sort an array using qsort
void sortArray(int *arr, int n) {
    qsort(arr, n, sizeof(int), compare);
}
