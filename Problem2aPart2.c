#include <stdio.h>

unsigned long long int factorial(unsigned int x);//function prototype
unsigned long long int factorialSolving(unsigned int y);//function prototype

int main()
{

    //counter for the while loop
    unsigned int oddCounter = 1;

    while(oddCounter <= 15){

        printf("%u! = %llu\n", oddCounter, factorial(oddCounter));
        oddCounter += 2; //Will increase oddCounter by 2 after every interation

    }
} //end main

//function that will produce the value for each factorial using recursion
unsigned long long int factorialSolving(unsigned int y){

if(y <= 1){
    return 1; //base case of the recursion function

} else {
    return y * factorialSolving(y - 1);
}


}

// function that will sort the values of the factorials
unsigned long long int factorial(unsigned int x){

    switch(x){

case 1:
    return 1;
    break;
case 3:
case 5:
case 7:
case 9:
case 11:
case 13:
case 15:
    return factorialSolving(x);
    break;

    }
}
