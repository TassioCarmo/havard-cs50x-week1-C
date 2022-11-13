#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();
    //printf("%i\n", cents);

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    //printf("%i\n", cents);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    //printf("%i\n", cents);

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;
    //printf("%i\n", cents);

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;
    //printf("%i\n", cents);
    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("how many cents is own\n");
    }
    while (cents < 0);


    return cents;

}

int calculate_quarters(int cents)
{
    int count = 0;
    for (int i = cents ; i >= 1; i -= 25)
    {
        if (i >= 25)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int calculate_dimes(int cents)
{
    int count = 0;
    for (int i = cents ; i >= 1; i -= 10)
    {
        if (i >= 10)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int calculate_nickels(int cents)
{
    int count = 0;
    for (int i = cents ; i >= 1; i -= 5)
    {
        if (i >= 5)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int calculate_pennies(int cents)
{
    int count = 0;
    for (int i = cents ; i >= 1; i--)
    {
        if (i >= 1)
        {
            count++;
        }

    }
    return count;
}
