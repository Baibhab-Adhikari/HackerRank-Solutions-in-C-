#include <stdio.h>
#include <stdlib.h>

void reverse(int arr[], int n); // function prototype

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    reverse(arr, num);

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    free(arr);
    return 0;
}

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}