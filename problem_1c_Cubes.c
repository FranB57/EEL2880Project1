#include <stdio.h>
#include <stdlib.h>
int cube (int y); //function prototype
int main()
{
    long long int x; //counter

    //loop 16 times and calculate and output square of x each time
    for( x=-16; x<=16; ++x){
        printf("%14d", cube(x));  // function call
            } //end for
            puts("");
} //end main

//cube function definition returns the cube of its parameter

int cube (int y)     //y is a copy of the argument to the function
{
    return y * y * y;     //returns the square of y as an int
} //end function square
