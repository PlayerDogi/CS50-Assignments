#include <stdio.h>
#include <cs50.h>
void calculator(int change);
int main(void){
    int change;
    do{change = get_int("Change owed: ");}
    while(change<1);
    calculator(change);

}

void calculator(int change)
{
    int coins= 0;
    coins += change / 25;
    change %= 25;

    coins += change /10;
    change %= 10;

    coins += change /5;
    change %= 5;

    coins += change /1;
    change %= 1;
    printf("%i\n",coins);
}
