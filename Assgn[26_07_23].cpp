/* Program to generate a Random Integer and Find its Highest Base */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, arr[10] = {5}, max = 0, highest_base;                   // Initialising integer array with '5' at '0' index as asked for in the Problem.
    int *ptr = arr;

    for(i = 1, j = 0; i < 10, j < 10; i++, j++)                 
    {
        *(ptr + i) = rand() % 9;                    // Generating the random 10 Digit Number using 'rand()' function.

        if(*(ptr + j) > max)                    // Finding the largest digit in the Number.
        {
            max = *(ptr + j);
        }

    }

    highest_base = max + 1;                 // Incrementing the highest number by 1 to get the Highest Base of the Number.

    printf("The Highest Base of ");                     // Staggered Print statements to print the required Output.
    for(k = 0; k < 10; k++)
    {
        printf("%d", *(ptr + k));
    }
    printf(" is %d.", highest_base);

    return 0;
}