#include<stdio.h>
#include<cs50.h>

int main(void)
{
//Get size of gridd
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n<1);
    for(int i = 0; i < n ; i++)
    {
        //Print grid of bricks
        for(int j = 0; j < n ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}