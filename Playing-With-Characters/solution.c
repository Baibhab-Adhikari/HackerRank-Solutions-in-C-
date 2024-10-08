#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char str[100], str2[100];
    scanf("%c %s", &ch, &str);
    scanf("\n");
    scanf("%[^\n]s", &str2);
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", str2);

    return 0;
}
