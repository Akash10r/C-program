#include <stdio.h>
int main()
{
    int n,handshakes;
    printf("Number of people in the room: ");
    scanf("%d",&n);
    handshakes = n*(n-1)/2;
    printf("The maximum number of handshakes is %d\n",handshakes);
    return 0;
}
