#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    // Write your logic to print the tokens of the sentence here.
    // iterate through the string
    for (int i = 0, j = strlen(s); i < j; i++)
    {
        // if whitespace found then print newline
        if (s[i] == ' ')
        {
            printf("\n");
        }
        // else print the characters of the word in each iteration
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    free(s);
    return 0;
}