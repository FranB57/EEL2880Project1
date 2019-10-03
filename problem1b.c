#include <stdio.h>
#include <stdlib.h>
int square (int y);    // function prototype for squaring
int main()
//function main begins program execution
{
int x;   // counter

//loop 16 times and calculate and output square of x each time
for(x=16; x>= -16; --x ){
    printf("%14d " , square(x));  //function call
} //end for
    puts("");
}  //end main

//square function definition returns square of its parameter
int square (int y)  //y is a copy of the argument to the function
{
    return y * y;  //returns the square of y as an int
}  //end function square
