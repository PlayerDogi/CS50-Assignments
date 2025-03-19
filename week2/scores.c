#include <stdio.h>
#include <cs50.h>
float avarage(int length , int array[]);
const int N = 3 ;
int main(void)
{
    int score [N];
    for(int i = 0 ; i < N ; i ++)
    {
        score[i]=get_int("Grade: ");
    }
    printf("Avarage : %f.\n",avarage(N, score) );
}

float avarage(int length , int array[])
{
    int sum = 0;
    for(int i = 0 ; i< length ; i++)
    {
        sum += array[i];
    }
    return sum /(float)length;
}
