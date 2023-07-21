#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    int count[MAX_CHAR] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        count[str[i]]++;

    for (int i = MAX_CHAR - 1; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%c - %d\n", (char)i, count[i]);
        }
    }

    return 0;
}
