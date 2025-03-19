#include <stdio.h>
#include <cs50.h>
void mario(int bricks , int spaces);
int positive_number(void);
int main(void){

    int height = positive_number();
    for(int i = 0 ; i < height ; i++){
    mario(i+1,height -i - 1 );
    mario(i + 1 , 2);
    printf("\n");
    }
}
void mario(int bricks , int spaces)
{
    for(int i = 0 ; i < spaces ; i++){
        printf(" ");
    }
    for(int i = 0 ; i<bricks ; i++){
        printf("#");
    }
}

int positive_number(void){
    int n;
    do{
        n = get_int("Height: ");
    }
    while(n<1);
    return n;
}
