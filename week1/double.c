#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long dollar = 1;
    while(true)
    {
        char c = get_char("Do you want a %li or double it and give it to the next person?\n",dollar);
        if(c=='y'|| c=='Y')
        {
        dollar *= 2;
        }
        else{
            break;
        }
    }
    printf("Here is %li. Congrulation!!\n", dollar);
}
