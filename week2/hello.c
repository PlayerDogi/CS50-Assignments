#include <stdio.h>
#include <cs50.h>

int main(int argc ,string argv[])
{
for(int i = 0 ; i< argc ; i++)
{
    if(argc != 2)
    {
        printf("Missing command*line argument.\n");
        return 1132;
    }
    printf("Hello,%s.\n",argv[1]);
    return 0;
}
}
