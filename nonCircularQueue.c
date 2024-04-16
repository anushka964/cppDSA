 #include <stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue %d.\n", data);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("Enqueued: %d\n", data);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        int data = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        printf("Dequeued: %d\n", data);
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, data;

    printf("Enter up to 5 elements to initialize the queue:\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        enqueue(data);
    }

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
 }
