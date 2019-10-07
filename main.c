#include <stdio.h>

/*
Problem 1: Printing the factorials of even and odd numbers separately from
1 to 16
*/

unsigned long long int factorial(unsigned int x); //Function Prototype

int main()
{

    unsigned int evenCounter; // Variable that will work as a counter for even numbers
    unsigned int oddCounter; // Variable that will work as a counter for odd numbers


    puts("factorials of even numbers: ");
    //Loop that will start at 0 until 16 and will print the factorial of even numbers
    for(evenCounter = 0; evenCounter <= 16; evenCounter += 2)
    {

        printf("%u! = %llu\n", evenCounter, factorial(evenCounter) );

    }

    puts("\nfactorials of odd numbers: ");

    //Loop that will start at 1 until 15 and will print the factorial of odd numbers
     for(oddCounter = 1; oddCounter <= 15; oddCounter += 2)
    {

        printf("%u! = %llu\n", oddCounter, factorial(oddCounter) );

    }

}//End of main

    unsigned long long int factorial(unsigned int x) //Definition of the function that will use recursion
    {

        if(x <= 1) //Base case that the function will use to guide itself
        {
            return 1;
        }
         else
        {

            return x * factorial(x - 1);//A function that will call itself to produce recursion
        }
    } //End of function definition.


