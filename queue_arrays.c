
#include <stdio.h>
#include <stdlib.h>

// define the size of the array
#define size 10

void enqueue(int val);
void dequeue();

/* Let's initialize front and rear to zero which means queue is empty */
int front = 0;
int rear = 0;

int arr[size];
/*
 * I will check weather the queue is empty or not I will note it using below
 * return -1 if the queue is empty
 * return 1 if queue is not empty
 */

int isQueueEmpty() {
    if (front == rear) {
        return -1;
    }
    return 1;
}

/*
 * I will check if the queue is full or not
 * return -1 if queue is full
 * reutrn 1 if queue not full
 */

int isQueueFull() {
    if (rear == size) {
        return -1;
    }
    return 1;
}

// Implementation of enque
void enqueue(int val) {
    if (isQueueFull() == -1) {
        printf("Queue is full\n");
    } else {
        arr[rear] = val;
        rear++;
    }
}

// Dequeue implementation

void dequeue() {
    if (isQueueEmpty() == -1) {
        printf("Queue is emtpy\n");
    } else {
        printf("Dequeue element is: %d\n", arr[front]);
        front++;
    }
}

/* Main function to check if our functions are working perfectly */
int main(int argc, char *argv[]) {
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(9);
    enqueue(3);
    displayQueue();  // display 5
    dequeue();
    displayQueue();
    return 0;
}
