#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";

    int count[26] = {0};
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Valid Anagram\n");

        return 0;
}