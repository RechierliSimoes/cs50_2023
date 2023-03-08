#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    int cont = 1;
    while (cont <= height) {
        int spaces = height - cont;
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        for (int i = 0; i < cont; i++) {
            printf("#");
        }
        printf("\n");
        cont++;
    }
}
