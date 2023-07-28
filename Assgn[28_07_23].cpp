/* Program to generate 50 Random Integers and find their Highest base.*/

#include <stdio.h>
#include <stdlib.h>

int hbase(long long unsigned int);

int hbase(long long unsigned int num)                  // Function to Find and Return Highest Base of a Number.
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
    long long unsigned int arr[50];                 // Creating an Array of 50 elements, of "long long unsigned int" data type.
    int i;

    for(i = 0; i < 50; i++)                 // Loop to generate And Print Random numbers and their Highest base at the same time.
    {
        arr[i] = rand() % 9999999 + 5000000000;                    // Rand() function to generate random numbers within the Range[5000000000, 5099999999]

        printf("The Highest Base of %llu is %d.\n", arr[i], hbase(arr[i]));                 // Printing the required Number and its Highest Base.
    }
    
    return 0;
}