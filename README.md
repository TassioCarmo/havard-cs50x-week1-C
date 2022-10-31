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

<h2>Main, header files, commands</h2>

<p>.h also known as header filers are nothing more than a menu of functions</p>

<p>Commands:</p>
<ul>
   <li> cd, for changing our current directory (folder)</li>
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



<h2>Types, format codes, operators</h2>

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
