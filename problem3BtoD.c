#include <stdio.h>
#define SIZE_1 33
#define SIZE_2 23

int squareFunction(int x); //function prototype for squaring
int cubeFunction(int y); //function prototype for cubing

int main(void)
{
    
    //declaration of the arrays that will store the results of raising numbers
    int squareArray[SIZE_1];
    int cubeArray[SIZE_1];
    int fifthPowerArray[SIZE_2];
    
    int counter; //variable that will work as counter for the loop
    
    printf("%s%29s%37s", "Square of numbers -16 to 16:","Cube of numbers -16 to 16:", "Fifth Power of numbers -11 to 11:\n");
    
    //The loop will start in -16 up to 16 to produce and store the values for the square and cube functions
    for(counter = -16; counter <= 16; ++counter)
    {
        
        squareArray[counter + 16] = squareFunction(counter);
        printf("\n%d^2 = %d", counter, squareArray[counter + 16]);
        
        cubeArray[counter + 16] = cubeFunction(counter);
        printf("%23d^3 = %d", counter, cubeArray[counter + 16]);
        
        puts("");
        
        //the nested if statement will produce and store the values of the fifthPowerArray from -11 to 11
        if(counter >= -11 && counter <= 11)
        {
            
    //the next statement uses the values already stored in the square and cube arrays to find the new value for fifthPowerArray
            fifthPowerArray[counter + 11] = squareArray[counter + 16] * cubeArray[counter + 16];
            printf("%63d^5 = %d", counter, fifthPowerArray[counter + 11]);
        } // end if statement
     
    }// end for loop
    
}// end main

//definition of squareFunction that will multiply a int by itself
int squareFunction(int x)
{
    
    return x = x * x;
}

//definition of cubeFunction that will muliply 2 times by itself
int cubeFunction(int y)
{
    
    return y = y * y * y;
}
