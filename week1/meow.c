#include <cs50.h>
#include <stdio.h>
void meow(int i);
int positive_number(void);
int main(void){
    int times = positive_number();
    meow(times);
    printf("You used meow %i times.\n", times);
}
int positive_number(void){
    int n;
    do{
    n = get_int("Number: ");
    }
    while(n<1);
    return n;
}

void meow(int n){
        for(int i = 0 ; i<n ; i++){
        printf("Meow!\n");
    }
}
