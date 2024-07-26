#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, i, total = 0, digits;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i = 0; i < 5; i++) {
    digits = n % 10;  // get digits
    total += digits;  // add those digits
    n /= 10;  //remove the last digit
    }
    printf("%d\n", total);
    return 0;
}
