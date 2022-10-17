/*
*Let’s recreate that pyramid in C, albeit in text, using hashes (#) for bricks,
*a la the below. Each hash is a bit taller than it is wide, so the pyramid itself will also be taller than it is wide.
*
*        #
*       ##
*      ###
*     ####
*
*
*/

#include <cs50.h>
#include <stdio.h>

void draw(int height);

int main(void)
{
    int height;
    //promt the user for the height until a valid height is given
    do
    {
        height = get_int("What is the height of the pyramid \n");
    }
    while (height <= 0 || height > 8);

    draw(height);

}

void draw(int height)
{
    //for each row
    for (int i = 0; i < height; i++)
    {
        //Align
        for (int k = height - i; k > 1; k--)
        {
            printf(" ");
        }

        //for each column
        for (int j = 0; j < height; j++)
        {
            if (i >= j)
            {
                printf("#");
            }

        }
        printf("\n");
    }
}