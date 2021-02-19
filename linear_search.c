#include<stdio.h>

int main(void)
{
    char ch;
    int arr[50], n, i, item;
    printf("How many elements you want to enter in the array: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        printf("\n Enter element %d: ", i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("Press any key to continue ...");
    getchar();
    
    do {
        printf("Enter the element to be searched: ");
        scanf("%d", &item);
        for (i = 0; i < n; i++) {
            if (item == arr[i]){
                printf("\n %d Fount at position %d\n", item, i+1);
                break;
            }
            
        }
    if (i==n) {
        printf("\n Item %d not fount in array \n", item);
        printf("\n Press (y/Y) to continue: ");
        scanf("%c", &ch);
    }
        
    } while (ch != 'Y' || ch != 'y');
}
