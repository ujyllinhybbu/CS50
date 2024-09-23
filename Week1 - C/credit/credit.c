#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");
    int digit = 0, length = 0, sum = 0, num_check = 0;
    while (number > 0)
    {
        if (10 <= number && number < 100)
            num_check = number;
        digit = number % 10;
        number /= 10;
        length++;
        if (length % 2 == 1) // odd
            sum += digit;
        else // even
        {
            if (digit < 5)
                sum += digit * 2;
            else
                sum += (digit * 2) % 10 + 1;
        }
    }
    // output the result
    if (sum % 10 == 0)
    {
        if (length == 15 && (num_check == 34 || num_check == 37))
            printf("AMEX\n");
        else if (length == 16 && num_check >= 51 && num_check <= 55)
            printf("MASTERCARD\n");
        else if (num_check / 10 == 4 && (length == 13 || length == 16))
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
    {
        printf("INVALID\n");
    }
}