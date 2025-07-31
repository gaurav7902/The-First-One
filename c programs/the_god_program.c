#include <stdio.h>
#include <stdlib.h>

// ---------- SWAP ----------
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ---------- ARRAY IO ----------
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// ---------- COMPARATORS FOR QSORT ----------
int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

// ---------- CUSTOM QUICK SORT ----------
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot)
            swap(&arr[++i], &arr[j]);
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Wrapper for quick sort
void my_qsort(int *arr, int n) {
    quickSort(arr, 0, n - 1);
}

// ---------- SEARCH ----------
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// ---------- FILE IO ----------
void writeToFile(char *filename, int arr[], int n) {
    FILE *f = fopen(filename, "w");
    if (!f) {
        printf("File write error.\n");
        return;
    }
    for (int i = 0; i < n; i++)
        fprintf(f, "%d ", arr[i]);
    fclose(f);
}

void readFromFile(char *filename, int arr[], int *n) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("File read error.\n");
        return;
    }
    *n = 0;
    while (fscanf(f, "%d", &arr[*n]) != EOF)
        (*n)++;
    fclose(f);
}

// ---------- MATH UTILITY ----------
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int getMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int getSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

double getAvg(int arr[], int n) {
    return (double)getSum(arr, n) / n;
}

// ---------- REVERSE ----------
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++)
        swap(&arr[i], &arr[n - 1 - i]);
}

// ---------- MAIN FOR TESTING ----------
int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    inputArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    // Sort using your own quick sort
    my_qsort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    // Reverse
    reverseArray(arr, n);
    printf("Reversed array: ");
    printArray(arr, n);

    // Search
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    int pos = binarySearch(arr, n, key);
    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    // Math utils
    printf("Min = %d, Max = %d, Sum = %d, Avg = %.2lf\n",
           getMin(arr, n), getMax(arr, n), getSum(arr, n), getAvg(arr, n));

    // Optional: Write to file
    writeToFile("output.txt", arr, n);
    printf("Array written to output.txt\n");

    return 0;
}
