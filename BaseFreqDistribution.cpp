#include <stdio.h>
#include <stdlib.h>

int hbase(int); 

int hbase(int num)                  // Function to Find and Return Highest Base of a Number.
{
    int rem, std = 0;   
    while (num > 0)
    {
        rem = num % 10;                 // Modulus operation to get the last digit of the number
        if(rem > std)                   // Variable "std" had been declared with initial value of 0.
        {
             std = rem;
        }   
        num = num / 10;                 //Division operation to get to the next remaining digits of the number.
    }
 return std + 1;                    // Incrementing the Largest Digit found in the number by 1, to get the Highest Base.
}    

int main()
{
    int num, hold, max = 0, m, arr[500], freq[11] = {0};

    printf("\nRandom Numbers:\n");                  // Generating 500 random numbers.

    for(int i=0; i<500; i++)                    // Loop cycles for 500 times.
    { 
        arr[i] = rand() % 999 + 999;                  
        /* printf("%d ", arr[i]); */            // Option to Print all Generated Random Numbers. 
        
        hold = (hbase(arr[i]));                 // Holding the Value of Highest Base.

        freq[hold] = ++freq[hold];                  // Incrementing Value in Corresponding index of Base Frequency Array.
    }
    
    printf("\n\nBase Frequency:\n");                    //Printing Highest Base Frequency Distribution.             
    for(int j=2; j<11; j++)
    { 
        printf("Base %d --> ", j); 
        printf("%d \n", freq[j]);
    }
    
    printf("\n\nFrequency Distribution Graph:\n\n");                 // Frequency Distribution Graph.
    
    for(int k=0; k<11; k++)                 // Finding MAX value in Frequency Array, which is required to print graph.                      
    {
        if(freq[k] > max)                   // Cycling through values stored in "freq" array.                                     
        {
            max = freq[k];                  // Variable "max" had been declared with initial value of 0.                  
        }
    }
    
    while(max > 0)                  // Nested loops to Print the Graph in a Top-Down approach.
    {
        for(int m=1; m<11; m++)
        {
            if(freq[m] < max)
            {
                printf("     ");
            }
            else{
                printf("  *  ");
            }
        }
        printf("\n");
        max = --max;                    // Decrementing the value of "max" as we go down the graph while printing.
    }
    
    printf("BASE:");                    // Label for graph indicating the BASE.
    for(int n = 2; n < 11; n++)
    {
        printf(" (%d) ", n);
    } 
    printf("\n");

    printf("FREQ: ");                   // Label for graph indicating the FREQUENCY.
    for(int p = 2; p < 11; p++)
    {
       printf("[%d] ", freq[p]); 
    }
    
}