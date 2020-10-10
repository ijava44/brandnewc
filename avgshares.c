#include <stdio.h>
int main()

{
    int sum, size_one = 600, size_two = 100, size_three =200;
    sum = size_one;                         /* Sum assigned a value */
    sum = sum + size_two;                   /* Sum assigned a new vaulue */
    sum = sum + size_three;                 /* Sum assigned a new value */
    printf("The average number of shares traded is ");
    printf("%i", sum / 3);
    printf("\n");

}

