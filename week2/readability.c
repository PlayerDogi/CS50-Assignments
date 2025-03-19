#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int count_letters(string text, int n);
int count_words(string text, int n);
int count_sentences(string text, int n);
int coleman(int letters, int words, int sentences);
int main(void)
{
    string text = get_string("Text: ");
    int n=strlen(text);
    int letters = count_letters(text,n);
    int words = count_words(text,n);
    int sentences = count_sentences(text,n);

    int index = coleman(letters, words, sentences);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if(index >= 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i \n", index);
    }

}

int count_letters(string text, int n)
{
    int count = 0;
    for(int i = 0; i < n ; i++)
    {
        if(isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}
int count_words(string text, int n)
{
    int count = 1;
    for(int i = 0 ; i < n ; i++)
    {
        if(text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int count_sentences(string text, int n)
{
    int count=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(text[i] == '?' || text[i]=='!' ||text[i]== '.')
        {
            count++;
        }
    }
    return count;
}
int coleman(int letters, int words, int sentences)
{
    int L = (letters / (float) words)*100;
    int S = (sentences /(float) words)*100;
    int index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}
