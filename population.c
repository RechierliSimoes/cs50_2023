#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initial_value;
    do
    {
        initial_value = get_int("What will be the initial size: ");
    }
    while (initial_value < 9);

    int final_value;
    do
    {
        final_value = get_int("What will be the final size: ");
    }
    while (final_value <= initial_value);

    int years = 0;

    do
    {
    int births  = 3;
    int deaths = 4;
    int cont = initial_value;
    initial_value = (initial_value / births) - (initial_value / deaths) + initial_value;
    years++;
    }
    while (initial_value < final_value);

    {
    printf("Years: %i", years);
    }
}