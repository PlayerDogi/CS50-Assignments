#include <stdio.h>
#include <cs50.h>
#include <string.h>
#define MAX 9
typedef struct{
    string name;
    int votes;
} candidate;
candidate candidates[MAX];
int candidate_count;
bool vote(string name);
void print_winner(void);
int main(int argc, string argv[])
{
    if(argc < 2)
    {printf("Invalid value. Usage ./plurality1 [name]\n");
    return false;}

    candidate_count = argc -1;
    if(candidate_count > MAX)
    {
        printf("You have reached the max limit of %i candidates.\n", MAX);
        return 1;
    }
    for(int i = 0 ; i < candidate_count ; i++)
    {
        candidates[i].name = argv[i+1];
        candidates[i].votes = 0;
    }
    int voter_count = get_int("Number of Voters: ");
    for(int i = 0; i<candidate_count;i++)
    {
        string name = get_string("Vote: ");

        if(!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    print_winner();
}

bool vote(string name)
{
    for(int i= 0; i< candidate_count ; i++)
    {
        if(strcmp(candidates[i].name,name)==0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int highest_score = 0;
    for(int i = 0 ; i<candidate_count ; i++)
    {
        if(candidates[i].votes > highest_score)
        {
            highest_score=candidates[i].votes;
        }
        if(candidates[i].votes == highest_score)
        {
            printf("%s won with %i votes\n", candidates[i].name, highest_score);
        }
    }
}
