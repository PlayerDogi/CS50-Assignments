#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void chiper(string s , int key);
int main(int argc ,string argv[])
{
    if(argc != 2)
    {
        printf("Usage ./monster key \n");
        return 1;
    }

    int key = atoi(argv[1]);

    string text = get_string("plaintext: ");

    chiper(text,key);

    printf("ciphertext: %s \n",text);

    return 0;

}

void chiper(string s , int key)
{
    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
            {
                s[i] = (s[i] - 'A' + key)%26 + 'A';
            }

            else if(islower(s[i]))
            {
                s[i] = (s[i] - 'a' + key)%26 + 'a';
            }
        }
    }

}
