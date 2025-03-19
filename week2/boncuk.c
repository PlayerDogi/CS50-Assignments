#include <stdio.h>
#include <cs50.h>
const int N = 10;
int main(void)
{
    int numbers[N];
    numbers[0]= 1;

    for(int i = 1 ; i<N ; i++)
    {
        numbers[i] = numbers[i-1]*2;
    }
    for(int i = 0 ; i<N ; i++)
    {
        printf("%i\n",numbers[i]);
    }
}
