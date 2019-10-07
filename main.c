#include <stdio.h>

int squareFunction(int x); //function prototype
int cubeFunction(int y); //function prototype

int main()
{
    
    int squareCounter = 16; //counter for loop of squareFunction
    int cubeCounter = 16; // counter for loop of cubeFunction
    
    puts("Square of numbers from 16 to -16:");
    //loop for squareFunction
    while(squareCounter >= -16)
    {
        
        printf("%d^2 = %d\n", squareCounter, squareFunction(squareCounter));
        --squareCounter;
    }
    
    puts("\nCube of numbers from 16 to -16:");
    //loop for cubeFunction
    while(cubeCounter >= -16)
    {
        
        printf("%d^3 = %d\n", cubeCounter, cubeFunction(cubeCounter));
        --cubeCounter;
    }
} //end main

//function where x will be multiplied by x
int squareFunction(int x)
{
    
    return x = x * x;
}

//function where y will be multiplied by y * y
int cubeFunction(int y)
{
    
    return y = y * y * y;
}

