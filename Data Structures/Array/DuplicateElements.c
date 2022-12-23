//To find the numbers of duplicate elements in a Array of size 100 based on user input

#include <stdio.h>
#include <unistd.h>

int main()
{
    int arr [100];
    int i, j;
    int temp = 0, count = 0;

    printf("\n************************************************************\n\n");

    for (i = 0; i < 100; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

 
    printf("\nEnter the elements of the array : ");
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
    }
    */

    for (i = 0; i < 100; i++)
    {
       temp = arr[i];

       for (j = i + 1; j < 100; j++)
       {
            if (temp == arr[j])
            {
                count++;
            }

            else 
                continue;
       }
    }

    printf("\nNumber of duplicate elements in Array : %d\n", count);

    sleep(2);

    printf("\n************************************************************\n");

    return 0;    
    }
