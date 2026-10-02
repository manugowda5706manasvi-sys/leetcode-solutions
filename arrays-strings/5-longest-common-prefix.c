#include <stdio.h>
#include <string.h>

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;

    int i = 0;
    int j;
    int prefixLength = strlen(strs[0]);

    for (j = 1; j < n; j++)
    {
        while (strncmp(strs[0], strs[j], prefixLength) != 0)
        {
            prefixLength--;

            if (prefixLength == 0)
            {
                printf("Common Prefix: \n");
                return 0;
            }
        }
    }

    printf("Common Prefix: ");

    for (i = 0; i < prefixLength; i++)
    {
        printf("%c", strs[0][i]);
    }

    printf("\n");

    return 0;
}