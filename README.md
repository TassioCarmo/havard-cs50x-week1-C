<h1>Introduction to the C language </h1>
<h1>What did i learn?</h1>

# IMPORTANT

When we evaluate the quality of our code, we might consider the following aspects:
<ul>
<li> <strong>Correctness</strong>, or whether our code solves our problem correctly</li>
<li> <strong>Design</strong>, or how well-written our code is, based on how efficient and readable it is
<li> <strong>Style</strong>, or how well-formatted our code is visually</li>
</ul>
<p>The most important here is not only your code to be correct but it must be <strong>well-designed</strong> to be easier to read months from now by you or someone else or some maintenance</p>

**Remember better designed also means it doesn't use up too much memory, and it isn't redundant**


<h2>IDEs, compilers, interfaces</h2>

<p>A IDEs or integrated development environments, include features for us to write, translate, and run our code.</p>

<p>A <strong>compiler</strong> is a program that can convert one language to another, such as source code to machine code:</p>
<img src = "https://cs50.harvard.edu/x/2022/notes/1/compiler.png">
<p><strong>Source code</strong> something written in a programming language</p>


```
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

```


<strong>Machine code</strong>

```
10010000 11101110 10101010 10001000
```

<h2>Main, header files, commands</h2>

<p>.h also known as header filers are nothing more than a menu of functions</p>

# Terminal Commands:
<ul>
   <li> cd, for changing our current directory (folder)</li>
   <li> cd.., go back a directory</li>
   <li> cp, for copying files and directories</li>
   <li>  ls, for listing files in a directory</li>
   <li> mkdir, for making a directory</li>
   <li> mv, for moving (renaming) files and directories</li>
   <li> rm, for removing (deleting) files</li>
    <li>rmdir, for removing (deleting) directories</li>
</ul>  

<h2>Functions, arguments, return values, variables</h2>

<p>Side effects, it's when a fuction just "do" something like print</p>
<img src = "https://cs50.harvard.edu/x/2022/notes/1/side_effects.png">

<p>And when a function return something like a value to be store in a variable</p>

<img src = "https://cs50.harvard.edu/x/2022/notes/1/return_value.png">



<h2>Types, format codes, operators in C</h2>

 <p> format codes for printf or also know as placeholders:</p> 
<ul>
   <li> %c for chars</li>
   <li> %f for floats or doubles</li>
   <li> %i for ints</li>
   <li> %li for long integers</li>
  <li>  %s for strings</li>
</ul>


```

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, %s\n", get_string("What's your name? "));
}

```


<p>Mathematical operators:</p>
<ul>
   <li> + for addition</li>
   <li> - for subtraction</li>
   <li> * for multiplication</li>
   <li> / for division</li>
   <li> % for remainder</li>
</ul>
<h2>Variables</h2>
   
 ```
 //value copied to left to right
 int counter = 0;
 ```

## Syntactic sugar

shorthand expressions for the same functionality. We could equivalently say <code>counter += 1</code>; to add one to counter before storing it again. We could also just write <code>counter++</code>;, or even <code>counter--</code>; to subtract one.</p>

## Calculations

 ```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
}
 ```
improve the style of program with comments, so you can remind what the line of code does

 ```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x + y);
}
 ```

<h2>Interger overflow</h2>
int in our virtual environment uses 32 bits,therefore if you want to use a number  bigger than 2³² use long int

In other words when you surpass the available bits like counting to 8 with 3 bits 000, wellyou can't it's impossible because you need 4 bits  1000

And there is imprecision in storing the float we get from an user like in(4.20 might be stored as 4.199999...),

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else if (points == 2)
    {
        printf("You lost the same number of points as me.\n");
    }
}

```

Instead of hard coding and using the same thing multiple times create variable
```
int main(void)
{
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}
```

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}
```
<h2>Conditionals, Boolean expressions</h2>

<p>"or”, represented by two vertical bars, <code>||</code>, to check if at least one of them has an answer of true.</p>
<p> we would use “and”, represented by ampersands, <code>&&</code>to check that both questions have an answer of true.</p>

 <p>compare two values in C, we use two equals signs, <code>==</code></p>
 
 <h2>Loops, functions</h2>The const keyword tells our compiler to ensure that the value of this variable isn’t changed, and by convention the name of the variable should be in all uppercase, MINE (to represent the number of my points).


A while loop repeats over and over as long as the expression inside is true

```
int counter = 0;
while (counter < 3)
{
    printf("meow\n");
    counter = counter + 1;
}
```

For loop, initialize variable; condition that checked; what you do after each loop

```
/*  
    initialize i to 0, check if the condition is true, print the message,
    increment the variable , check again if the condition is true
*/
for (int i = 0; i < 3; i++)
{
    printf("meow\n");
}
```
when there is only one line in a for and if loop you don't need to use {} but it's a good practice to use it


void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}

 Function names should be verbs if the function changes the state of the program, and nouns if they're used to return a certain value.

C reads uour code top to bottom and if it doesn't see something it before it doesn't exists

<h2>Imprecision, overflow</h2>


```
int main(void)
{
    // Prompt user for x
    float x = get_float("x: ");

    // Prompt user for y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;
    //give 2 decimals
    printf("%.2f\n", z);
}
```

nested array

```
 //for each row
 for(int i = 0; i < 1; i++){

     //for each column
     for(int j = 0; j < height; j++){
     }
 }

```

<h2>floating-point imprecision</h2>

%.50 = 0.66666668653488159179687500000000000000000000000000

the inability for computers to represent all possible real numbers with a finite number of bits, like 32 bits for a float


And there is imprecision in storing the float we get from an user like in(4.20 might be stored as 4.199999...),


## Others

**unsigned** somethin(g "int/char/float/etc") to ignore ignore nagative number

**Switch** , uses discrete cases to make decisions
````
switch(x)
{
    case 1:
    print("five")
        case 2:
    print("four")
        case 3:
    print("three")
        case 4:
    print("two")
        case 5:
    print("one")
    default
    ("go")
}

//without a break it'll go through all the cases 
```
#ternary operator ?:

<code> int x = (exp)? 5 : 6 </code>

same thing as if and lese if()exp true x=5 else x=6

Magic Numbers 

numbers that don't change
Wrong
 for(int i = 0; i < 10; i++){
 Right
 constant DECK = 10;
 for(int i = 0; i < DECK; i++){


