#include <stdio.h>
#include <cs50.h>

void print_mario_pyramid(int bricks, int spaces);

int main(void)
{
    int height;
    do
    {
        height = get_int("HEIGHT: ");
    } while (height < 1);

    // Her satır için piramidi yazdırıyoruz
    for (int i = 0; i < height; i++)
    {
        print_mario_pyramid(i + 1, height - i - 1);
        print_mario_pyramid(i + 1, 2);
        printf("\n");
    }
}

// Mario piramidi oluşturma fonksiyonu
void print_mario_pyramid(int bricks, int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}
