#include <stdio.h>
// #include <stdlib.h>

void update(int *a, int *b)
{
    // Complete this function
    // store original values in temporary variables
    int temp_1 = *a;
    int temp_2 = *b;
    // update values
    *a = temp_1 + temp_2;
    *b = temp_1 - temp_2;
    // return the absolute value
    if (*b < 0)
    {
        *b = ((-1) * (*b));
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}