#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {5, 2, 8, 3};
    int temp, i, j;

    for(i=0; i <= 3; i++)
    {
       for(j=0; j<= 3; j++)
      {
         if(arr[j] > arr[j+1])
         {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
         }
      }
    }

    /// array print
    for(i=0; i < 4; i++)
    {
         printf("%d\n",arr[i]);
    }

    return 0;
}
