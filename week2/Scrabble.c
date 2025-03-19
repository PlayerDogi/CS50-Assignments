#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 8, 5, 3, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word);

int main(void)
{
    string text1 = get_string("Player1: ");
    string text2 = get_string("Player2: ");

    int score1 = compute_score(text1);
    int score2 = compute_score(text2);

    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else{
        printf("Tie! \n");
    }

}

int compute_score(string word)
{
    int sum = 0;
    for(int i = 0 , N = strlen(word) ; i < N ; i++)
    {
        if(isalpha(word[i]))
        {
            int index = 0;
            if(isupper(word[i]))
            {
                index = word[i] - 'A';
            }
            else if(islower(word[i]))
            {
                index = word[i] - 'a';
            }
            sum += POINTS[index];
        }
        else{
            printf("Please provide a word \n");
        }
    }
    return sum;
}
