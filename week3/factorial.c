#include <stdio.h>
#include <cs50.h>

int factorial(int n);
const int N = 3;
int main(void)
{
    int number = get_int("Number: ");
    int result = factorial(number);
    printf("Your factorial is %i and your result is %i \n", number , result);
}


int factorial(int n)
{
        if(n <= 0 )
        {
            return 1;
        }
        else{
        return n * factorial(n-1);
        }
}
