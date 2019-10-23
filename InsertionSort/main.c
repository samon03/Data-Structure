#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {5, 2, 8, 3};
    int temp, i, j, t;

    for(i=1; i <= 3; i++)
    {
       int box = arr[i];
       for(j=i-1; j<= 3; j++)
      {
         if(j >= 0 && arr[j] > box)
         {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
         }
      }
      arr[j + 1] = box;
    }

    /// array print
    for(i=0; i < 4; i++)
    {
         printf("%d\n",arr[i]);
    }

    return 0;
}
