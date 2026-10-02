#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;

    strcpy(str, "hello");

    length = strlen(str);

    printf("Original string: %s\n", str);

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}