
#include <stdio.h>
int main()
{
    int a[8], b[3], c[3], i, j, k;
    printf("Enter the weights of 8 balls:\n");
    for (i = 0; i < 8; i++)
        scanf("%d", &a[i]);
    b[0] = a[0] + a[1] + a[2];
    b[1] = a[3] + a[4] + a[5];
    b[2] = a[6] + a[7];
    if (b[0] == b[1])
    {
        if (a[6] < a[7])
            printf("The defective ball is ball number 7\n");
        else
            printf("The defective ball is ball number 8\n");
    }
    else if (b[0] < b[1])
    {
        c[0] = a[0];
        c[1] = a[3];
        c[2] = a[4];
        j = 1;
        k = 2;
    }
    else
    {
        c[0] = a[2];
        c[1] = a[5];
        c[2] = a[6];
        j = 0;
        k = 1;
    }
    if (c[j] == c[k])
    {
        if (j == 0)
            printf("The defective ball is ball number 1\n");
        else if (j == 1)
            printf("The defective ball is ball number 4\n");
        else
            printf("The defective ball is ball number 7\n");
    }
    else if (c[j] < c[k])
        printf("The defective ball is ball number %d\n", j * 3 + 1);
    else
        printf("The defective ball is ball number %d\n", j * 3 + 2);
}
