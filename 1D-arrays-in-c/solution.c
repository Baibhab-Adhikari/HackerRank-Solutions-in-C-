#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d", &size);
    // allocate memory to the array
    int *arr = (int *)malloc(size * sizeof(int));
    // input integers into the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    // traverse the array and sum the elements
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    // print output
    printf("%d\n", sum);
    // free allocated memory
    free(arr);
    return 0;
}