#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A, i, j, minimum,maximum,n;
    int count = 0;
    printf("Enter the number of element of your array\n");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        A = (int*)malloc(n * sizeof(int));
    }
    printf("Enter your element:\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&A[i]);
        count++;
    }
    printf("The element you enter is:\n");
    for (i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }

   // sorting the array

    for (i=0; i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (A[i]>A[j]){
                int temp = A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("The minimum element in the array is %d\t",A[0]);
    printf("\n\n");
    printf("The maximum element in your array is %d\t",A[count -1]);

}
