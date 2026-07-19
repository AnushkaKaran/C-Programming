#include <stdio.h>

void main()
{
    int n, i, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }
    printf("There are %d elements divisible by 3", count);
}
