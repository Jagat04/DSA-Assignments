/* Program to generate 50 Random Integers and Find the Highest base frequency over them. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, k, m, n, highest_base;
    int arr[20], freq[11] = {0};
    int *ptr = arr;
    time_t t;

    srand((unsigned) time(&t));                 // Here 'srand()' function is used to seed the 'rand()' function used in the program.

    for(k = 0; k < 50; k++)
    {
        int max = 0;                    

        for(i = 0; i < 10; i++)                 
        {
             *(ptr + i) = rand() % 10;                    // Generating the random 10 Digit Number using 'rand()' function.

            if(*(ptr + i) > max)                    // Finding the largest digit in the Number.
            {
                max = *(ptr + i);
            }
        }

        highest_base = max + 1;                 // Incrementing the highest number by 1 to get the Highest Base of the Number.
    
        freq[highest_base] = ++freq[highest_base];                  // Counting the Highest Bases to Find out their frequency.

        printf("%d. The Highest Base of ", k+1);                     // Staggered Print statements to print the required Output.
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