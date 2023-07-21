#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2],i,j;
    printf("Enter Array Elements : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n1/2;i++)
    {
        for(j=i;j<n1-i-1;j++)
        {
            int t = arr[i][j];
            arr[i][j]=arr[n1-j-1][i];
            arr[n1-j-1][i]=arr[n1-i-1][n1-j-1];
            arr[n1-i-1][n1-j-1]=arr[j][n1-i-1];
            arr[j][n1-i-1]=t;
        }
    }
    printf("Rotated Matrix is : \n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
