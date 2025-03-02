#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

// Direction arrays for moving in the matrix: right, down, left, up
int rowDir[] = {0, 1, 0, -1};
int colDir[] = {1, 0, -1, 0};

// Queue structure for BFS
typedef struct {
    int row;
    int col;
    int dist;
} QueueNode;

typedef struct {
    QueueNode nodes[MAX * MAX];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0;
}

// Add an element to the queue
void enqueue(Queue *q, QueueNode node) {
    q->nodes[q->rear] = node;
    q->rear++;
}

// Remove and return an element from the queue
QueueNode dequeue(Queue *q) {
    return q->nodes[q->front++];
}

// Check if the queue is empty
int isQueueEmpty(Queue *q) {
    return q->front == q->rear;
}

// BFS to find the shortest path
int bfs(int matrix[MAX][MAX], int m, int n, int startX, int startY, int destX, int destY) {


    if (matrix[startX][startY] != 1 || matrix[destX][destY] != 1) {
        return -1; // If source or destination is not 1, no path is possible
    }

    bool visited[MAX][MAX] = {false};
    Queue q;
    initQueue(&q);

    // Start BFS from the source
    visited[startX][startY] = true;
    enqueue(&q, (QueueNode) {startX, startY, 0});

    while (!isQueueEmpty(&q)) {
        QueueNode current = dequeue(&q);

        // If we reached the destination, return the distance
        if (current.row == destX && current.col == destY) {
            return current.dist;
        }

        // Explore all 4 directions
        for (int i = 0; i < 4; i++) {
            int newRow = current.row + rowDir[i];
            int newCol = current.col + colDir[i];

            // Check if the new position is valid and not visited
            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n &&
                matrix[newRow][newCol] == 1 && !visited[newRow][newCol]) {
                visited[newRow][newCol] = true;
                enqueue(&q, (QueueNode) {newRow, newCol, current.dist + 1});
            }
        }
    }

    return -1; // If there's no path to the destination
}

int main() {
    int m, n;

    // Input the matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[MAX][MAX];

    // Input the matrix elements
    printf("Enter the matrix elements (0 or 1):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int startX, startY, destX, destY;

    // Input the source and destination coordinates
    printf("Enter the source coordinates (row col): ");
    scanf("%d %d", &startX, &startY);
    printf("Enter the destination coordinates (row col): ");
    scanf("%d %d", &destX, &destY);

    // Find the shortest path using BFS
    int shortestPath = bfs(matrix, m, n, startX, startY, destX, destY);

    if (shortestPath == -1) {
        printf("No path exists between source and destination.\n");
    } else {
        printf("The shortest path length is: %d\n", shortestPath);
    }

    return 0;
}
