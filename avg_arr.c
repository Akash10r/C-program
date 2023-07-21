#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0.0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Average of the elements in the array is: %f\n", avg);
    for(i=0;i<n;i++)
    {

        if(arr[i]==avg)
        {
            printf("Value at next index: %d\n",arr[n+1]);
        }
    }

    return 0;
}
