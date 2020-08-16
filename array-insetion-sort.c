#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],i,j,n,temp=0;
    printf("Enter the number elements in your array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
    scanf("%d",&A[i]);
    }
    for(i=1; i<n; i++)
    {
    temp=A[i];
    j=i-1;
    while(j>=0 && A[j]< temp)
    {
    A[j+1]=A[j];
    j--;
    }
    A[j+1]=temp;

    }
    // to display the output
    printf("The resultant array is :\n");
    for(i=0; i<n; i++)
    {
    printf("\n%d\t",A[i]);
    }
}
