#include <cs50.h>
#include <stdio.h>

void validades(long int cardNumber);


int main(void)
{
    //Get the card number input

    long int cardNumber = get_long("What is credit card number \n");

    validades(cardNumber);
}

void validades(long int cardNumber)
{
    long int checkCardNumber;
    int length = 1;
    int sum = 0;
    int numberEven = 0;

    checkCardNumber = cardNumber;

    //Loop that only ends if the number of the card is zero
    while (checkCardNumber != 0)
    {
        //Check if the location on the number is even
        if (length % 2 == 0)
        {
            numberEven = (checkCardNumber % 10) * 2;
            //checks if the result of the equation is smaller than 10 if it's i'll at it to the sum
            if (numberEven >= 0 && numberEven <= 9)
            {

                sum += numberEven;
            }
            else
            {
                //divide the number in the even position in two and add it to the sum+
                sum += (numberEven / 10);
                sum += (numberEven % 10);
            }
        }
        else
        {
            //if the number is odd adds the position to sum
            sum  += checkCardNumber % 10;
        }

        checkCardNumber = checkCardNumber / 10;
        length++;
    }

    //checks if the last digit in the sum number is zero, if it's check what creditcard valid or not and what type it's
    if (sum % 10 == 0)
    {
        if ((cardNumber >= 4000000000000 && cardNumber <= 4999999999999) || (cardNumber >= 4000000000000000
                && cardNumber <= 4999999999999999))
        {
            printf("VISA\n");
        }
        else if ((cardNumber >= 340000000000000 && cardNumber <= 349999999999999) || (cardNumber >= 370000000000000
                 && cardNumber <= 379999999999999))
        {
            printf("AMEX\n");
        }
        else if ((cardNumber >= 5100000000000000 && cardNumber <= 5599999999999999))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}