#include <stdio.h>

#define EMPTY -1

int hash(int key, int size){
    return key % size;
}

void init(int table[], int size) {
    for (int i = 0; i < size; i++) table[i] = EMPTY;
}

void insert(int table[], int size, int key) {
    int i = hash(key, size), start = i;
    while (table[i] != EMPTY) {
        i = (i + 1) % size;
        count++;
        if (i == start) {
            printf("Table full. Can't insert from  %d.\n", key);
            return;
        }
    }
    table[i] = key;

}

void search(int table[], int size, int key) {
    int i = hash(key, size), start = i, count = 0;
    while (table[i] != EMPTY && count < size) {
        if (table[i] == key) {
            printf("Found %d at %d (Probes: %d)\n", key, i, count);
            return;
        }
        i = (i + 1) % size;
        count++;
    }
    printf("%d not found (Probes: %d)\n", key, count);
}

void display(int table[], int size) {
    for (int i = 0; i < size; i++) {
        if (table[i] == EMPTY)
            printf("[%d] : EMPTY\n", i);
        else
            printf("[%d] : %d\n", i, table[i]);
    }
}


int main() {
    int size, n, key;
    char c;

    printf("Size? ");
    scanf("%d", &size);
    int table[size];
    init(table, size);

    printf("Keys? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(table, size, key);
    }

    display(table, size);

    while (1) {
        printf("Search? (y/n): ");
        scanf(" %c", &c);
        if (c == 'y' || c == 'Y') {
            scanf("%d", &key);
            search(table, size, key);
        } else break;
    }

    return 0;
}

