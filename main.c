#include <stdio.h>

unsigned long long int factorial(unsigned int x);
unsigned long long int factorialSolving(unsigned int y);

int main()
{

    unsigned int evenCounter = 0;

    while(evenCounter <= 16){

        printf("%u! = %llu\n", evenCounter, factorial(evenCounter));
        evenCounter += 2;

    }
}

unsigned long long int factorialSolving(unsigned int y){

if(y <= 1){
    return 1;

} else {
    return y * factorialSolving(y - 1);
}


}
unsigned long long int factorial(unsigned int x){

    switch(x){

case 0:
    return 1;
    break;
case 2:
    return factorialSolving(x);
    break;
case 4:
    return factorialSolving(x);
    break;
case 6:
    return factorialSolving(x);
    break;
case 8:
    return factorialSolving(x);
    break;
case 10:
    return factorialSolving(x);
    break;
case 12:
    return factorialSolving(x);
    break;
case 14:
    return factorialSolving(x);
    break;
case 16:
    return factorialSolving(x);
    break;

    }
}
