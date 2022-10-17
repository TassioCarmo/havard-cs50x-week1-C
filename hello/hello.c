#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //read the name input
    string name = get_string("what is your name\n");
    //prints
    printf("Hello, %s\n", name);
}