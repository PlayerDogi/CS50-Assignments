#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
int main(int argc, string argv[])
{
    string name = argv[1];
    if(argc != 2)
    {
        printf("Please provide a word.\n");
        return 1;
    }
    for(int  i = 1 ,n = strlen(name); i < n ; i++)
    {
        if(!isalpha(name[i]))
        {
            printf("This is not a letter.\n");
            return 2;
        }
    }
    for(int  i = 1 ,n = strlen(name); i < n ; i++)
    {
        if(name[i] < name [i-1])
        {
            printf("Command-line-argument.\n");
            return 3;
        }
    }

    printf("%s is alphabetical!\n", name);
    return 0;
}
