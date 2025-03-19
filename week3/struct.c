#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct{
    string name;
    int vote;
} person;
const int N = 3;
int main (void)
{
    person candidate[N];
    for(int i = 0 ; i < N ; i++)
    {
        candidate[i].name = get_string("Name: ");
        candidate[i].vote = get_int("Vote: ");
    }
    int highest_vote = 0;
    for(int i = 0 ; i < N ;i++)
    {
        if(candidate[i].vote>highest_vote)
        {
            highest_vote = candidate[i].vote;
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        if(candidate[i].vote == highest_vote)
        {
            printf("%s won with %i votes!\n", candidate[i].name , candidate[i].vote);
        }
    }
}
