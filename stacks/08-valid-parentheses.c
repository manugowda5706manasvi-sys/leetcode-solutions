#include <stdio.h>

int isValid(char str[])
{
    char stack[100];
    int top = -1;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            stack[top] = str[i];
        }
        else
        {
            if (top == -1)
            {
                return 0;
            }

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{'))
            {
                return 0;
            }

            top--;
        }
    }

    return top == -1;
}

int main()
{
    char str[] = "()[]{}";

    if (isValid(str))
    {
        printf("Valid Parentheses\n");
    }
    else
    {
        printf("Invalid Parentheses\n");
    }

    return 0;
}