#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year_passed();
    // TODO: Prompt for start size
    int start_size = 0;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size = 0;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int current_size = start_size;
    int year = 0;
    while (end_size > current_size)
    {
        current_size = year_passed(current_size);
        year++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", year);
}

int year_passed(int n)
{
    int population = n;
    population = population - n / 4;
    population = population + n / 3;
    return population;
}