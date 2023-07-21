#include <stdio.h>
#include <stdlib.h>

#define INF 1000000007

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int dp[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = arr[0][0];
    for(int i=1; i<n; i++)
    {
        if(arr[0][i] == 1)
        {
            break;
        }
        dp[0][i] = dp[0][i-1] + arr[0][i];
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i][0] == 1) {

            break   ;
        }
        dp[i][0] = dp[i-1][0] + arr[i][0];
    }
    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            if(arr[i][j] == 1) {
                continue;
            }
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + arr[i][j];
        }
    }
    printf("%d\n", dp[n-1][n-1]);
}
