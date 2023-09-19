#include <stdio.h>
#include <stdlib.h>
#define max 5

struct Queue {
    int orderIDs[max];
    int front, rear;
};

void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue *q) {
    return q->rear == max - 1;
}

int isEmpty(struct Queue *q) {
    return q->front == q->rear;
}

int insertq(struct Queue *q, int orderID) {
    if (isFull(q)) {
        return 0; // Return 0 to indicate queue is full
    } else {
        q->rear++;
        q->orderIDs[q->rear] = orderID;
        return 1;
    }
}

int delq(struct Queue *q, int *orderID) {
    if (isEmpty(q)) {
        *orderID = -1; // Set orderID to a sentinel value
        return 0; // Return 0 to indicate an empty queue
    } else {
        q->front++;
        *orderID = q->orderIDs[q->front];
        if (q->front > q->rear) {
            initializeQueue(q);
        }
        return 1; // Return 1 to indicate successful deletion
    }
}

void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    } else {
        printf("Order IDs in the queue are: ");
        for (int i = q->front + 1; i <= q->rear; i++) {
            printf("%d ", q->orderIDs[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue orderQueue;
    int orderID;
    int option;

    initializeQueue(&orderQueue);

    while (1) {
        if (scanf("%d", &option) != 1)
            break;

        switch (option) {
            case 1:
                if (scanf("%d", &orderID) != 1)
                    break;

                if (insertq(&orderQueue, orderID) == 0)
                    printf("Queue is full.\n");
                else
                    printf("Order ID %d is inserted in the queue.\n", orderID);
                break;

            case 2:
                if (delq(&orderQueue, &orderID) == 0) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Processed Order ID: %d\n", orderID);
                }
                break;

            case 3:
                display(&orderQueue);
                break;

            default:
                printf("Invalid option.\n");
                break;
        }
    }

    return 0;
}