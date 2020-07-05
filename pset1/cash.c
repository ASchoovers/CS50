#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float a;
    int cents;
    int change = 0;

    // Get user input
    do
    {
        a = get_float("Change owed: ");
        // Round to amount of cents
        cents = round(a * 100);

    }
    while (a <= 0);

    // Check for quarters
    while (cents >= 25)
    {
        change = change + 1;
        cents = cents - 25;
    }
    //Check for Dimes
    while (cents >= 10)
    {
        change = change + 1;
        cents = cents - 10;
    }
    // Check for Nickels
    while (cents >= 5)
    {
        change = change + 1;
        cents = cents - 5;
    }
    // Check for Pennies
    while (cents >= 1)
    {
        change = change + 1;
        cents = cents - 1;
    }
    // Print total coins
    printf("Total Coins: %i\n", change);
}
