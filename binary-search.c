#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *A,i,j,n,temp,find;
;
   printf("Enter the number of elements for the array:\n");
   scanf("%d",&n);
   for(i=0; i<n; i++){
    A = (int*)malloc(n*sizeof(int));
    }
   printf("Enter the element in your array:\n");
   for(i=0; i<n; i++){
    scanf("%d",&A[i]);
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

   printf("The output array is:\n");
   for(i=0; i<n; i++){
    printf("%d\n",A[i]);
   }
  printf("Enter value to find\n");
  scanf("%d", &find );

  int first = 0;
  int last = n - 1;
  int mid = (first+last)/2;

  while (first <= last) {
    if (A[mid] < find)
      first = mid + 1;
    else if (A[mid] == find) {
      printf("%d found at location %d.\n", find, mid+1);
      break;
    }
    else
      last = mid - 1;

    mid = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", find);

}
