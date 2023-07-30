/* Program to generate 50 Random Integers and Find the Highest base frequency over them.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, k, m, n, highest_base;
    int arr[10], freq[11] = {0};
    int *ptr = arr;
    time_t t;

    srand((unsigned) time(&t));                 // Here 'srand()' function is used to seed the 'rand()' function used in the program.

    for(k = 0; k < 50; k++)
    {
        int max = 0;                    
        arr[0] = {rand() % 4 + 5};                  // Using 'rand()' function to ensure that the last place digit is atleast 5, as required by the Problem.

        for(i = 1, j = 0; i < 10, j < 10; i++, j++)                 
        {
             *(ptr + i) = rand() % 10;                    // Generating the random 10 Digit Number using 'rand()' function.

            if(*(ptr + j) > max)                    // Finding the largest digit in the Number.
            {
                max = *(ptr + j);
            }
        }

        highest_base = max + 1;                 // Incrementing the highest number by 1 to get the Highest Base of the Number.
    
        freq[highest_base] = ++freq[highest_base];                  // Counting the Highest Bases to Find out their frequency.

        printf("The Highest Base of ");                     // Staggered Print statements to print the required Output.
        for(m = 0; m < 10; m++)
        {
            printf("%d", *(ptr + m));
        }
        printf(" is %d.\n", highest_base);

    }

    printf("\n\nHighest Base Frequency:\n");                    // Printing the obtained Highest Base Frequency Distribution.             
    for(int n = 2; n < 11; n++)
    { 
        printf("Base %d --> ", n); 
        printf("%d \n", freq[n]);
    }

    return 0;  
}