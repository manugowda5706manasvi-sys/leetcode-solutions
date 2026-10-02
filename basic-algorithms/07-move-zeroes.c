#include <stdio.h>

void printArray(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;
    int position = 0;
    int i;
    int temp;

    for (i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;

            position++;
        }
    }

    printf("Array after moving zeroes: ");
    printArray(nums, n);

    return 0;
}