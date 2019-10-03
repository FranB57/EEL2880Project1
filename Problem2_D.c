#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int square(int y);   //function prototype
int cube(int y);     //function prototype
int fifth (int y);   //function prototype
int main()
{
   int x = -11;

    //loop 11 times and calculate and output the fifth power of x each time

    while (x<=11){
      ++x;
        printf("%10d", fifth(x));  //function call
    } //end for
    puts("");
} //end main

// square function definition returns square of its parameter
int square( int y)
{
    return y * y; // returns square of y as int
}

// cube function definition returns cube of its parameter
int cube(int y)
{
    return y * y *y; // returns cube of y as int
}

// fifth function definition returns fifth of its parameter
int fifth(int y)
{
    return square(y) * cube(y); // returns fifth power of y as an int
}
