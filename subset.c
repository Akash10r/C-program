#include <stdio.h>
#include <math.h>
void printSubsets(int arr[], int n)
{
    int i, j;
    int numSubsets = pow(2, n);
    for (i = 0; i < numSubsets; i++)
    {
       // printf("{ ");
        for (j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                printf("%d \n", arr[j]);
        }
        //printf("}\n");
    }
}
int main()
{
    int arr[] = {2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubsets(arr, n);
    return 0;
}
