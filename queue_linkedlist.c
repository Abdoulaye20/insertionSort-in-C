#include <stdio.h>
#include <stdlib.h>
void enqueue(int x);
void dequeue();
void printList();
int main(int argc, char* argv[]) {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(5);
    printf("Queue: ");
    printList();
    dequeue();
    printf("Queue after dequeue operation is: \n");
    printList();

    return 0;
}

/*! struct Node
 *  brief Queue using linkedlist
 *
 *  Detailed description
 */
struct Node {
    int data; /*!< Detailed description */
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL && rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue() {
    struct Node* temp = front;
    if (front == NULL) {
        printf("Queue is empty. Unable to perform dequeue \n");
        return;
    }
    if (front == rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }
    free(temp);
}

void printList() {
    struct Node* temp = front;
    while (temp) {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
