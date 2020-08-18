#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node *next;
} node;
node *head = NULL;

node *createnode()
{

     //node *tmp = (node *)malloc(sizeof(node));
    node *temp = (node*)malloc(sizeof(node));
    return (temp);
}

/** to insert element at the last postion of a linked list */
node *insert_last()
{
    node *temp = createnode();
    printf("\n Enter the value to insert: ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else{
        node *tmp = head;
        while ( tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = temp;
    }
}

/** to delete node at the first location*/
node *deletion()
{
    node* temp;
    if (head == NULL)
    {
        printf("\n List is empty");
    }
    else{
        temp = head;
        head = head->next;
        free(temp);
    }
}

/** To delete element in the last position of linkedlist*/
node *deleteLast()
{
    if (head == NULL){
        printf("\nEmpty list deletion not possible\n");
    }
    else if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        node *temp = head;
        node *tmp;
        while(temp->next != NULL){
            tmp = temp;
            temp = temp->next;
        }
        free(tmp->next);
        tmp->next= NULL;
    }
}

/** To display the linkedlist */
node display()
{
    if (head == NULL)
    {
        printf("\nLinkedlist is Empty");
    }
    else{
        node *temp = head;
        while(temp){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
}

    /** the main function */
int main()
{
    int n;
    while(1)
    {
        printf("\n 1. Add value at last position");
        printf("\n 2.Delete value at the first position");
        printf("\n 3. Delete-last-position");
        printf("\n 4.Display the linked list");
        printf("Enter your choice:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            insert_last();
            break;
            case 2:
            deletion();
            break;
            case 3:
            deleteLast();
            break;
            case 4:
            display();
            break;
            default:
            printf("\n Invalid choice");
        }
    }
}
//* follow me on twitter: @abdoulayegk
