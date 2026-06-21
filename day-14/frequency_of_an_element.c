#include <stdio.h>

int main(void)
{
    int n, i, element, count = 0;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to find frequency: ");
    if (scanf("%d", &element) != 1)
        return 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
            count++;
    }

    printf("Frequency of %d is %d\n", element, count);
    return 0;
}
