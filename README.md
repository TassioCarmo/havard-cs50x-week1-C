<h1>Introduction to the C language </h1>
<h1>What did i learn?</h1>

When we evaluate the quality of our code, we might consider the following aspects:
<ul>
<li> <strong>Correctness</strong>, or whether our code solves our problem correctly</li>
<li> <strong>Design</strong>, or how well-written our code is, based on how efficient and readable it is
<li> <strong>Style</strong>, or how well-formatted our code is visually</li>
</ul>
<p>The most important here is not only your code to be correct but it must be <strong>well-designed</strong> to be easier to read months from now by you or someone else or some maintenance</p>

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

In Linux, there are a number of commands we might use:

    cd, for changing our current directory (folder)
    cp, for copying files and directories
    ls, for listing files in a directory
    mkdir, for making a directory
    mv, for moving (renaming) files and directories
    rm, for removing (deleting) files
    rmdir, for removing (deleting) directories
    
    For printf, too, there are different placeholders for each type, called format codes:

    %c for chars
    %f for floats or doubles
    %i for ints
    %li for long integers
    %s for strings

There are several mathematical operators we can use, too:

    + for addition
    - for subtraction
    * for multiplication
    / for division
    % for remainder




