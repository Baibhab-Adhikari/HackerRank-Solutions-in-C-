#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    // variables to store total scores of respective genders
    int sum_boy = 0;
    int sum_girl = 0;
    // traverse the array in even intervals for boys
    if (gender == 'b')
    {
        for (int i = 0; i < number_of_students; i += 2)
        {
            sum_boy += marks[i];
        }
        return sum_boy;
    }
    // traverse the array in odd intervals for girls
    else if (gender == 'g')
    {
        for (int i = 1; i < number_of_students; i += 2)
        {
            sum_girl += marks[i];
        }
        return sum_girl;
    }
  return 0;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}