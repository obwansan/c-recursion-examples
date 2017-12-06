#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int collatz(int n);
int steps = 0;

/**
* Collatz conjecture
* Write a recursive function collatz(n) that calculates how many steps it takes to get to 1
* if you start from n and recurse as indicated below.
*
* If n is 1, stop (return 1)
* else, if n is even, repeat (loop or recurse) this process on n/2
* else, if n is odd, repeat (loop or recurse) this process on 3n + 1
*
* NOTE: The code in the short doesn't work! having 'return' before the recursive
* function (e.g. return 1 + collatz(n/2);) doesn't work, but not havng it does (at least for printing out).
* Also, can't see why you need the '1 +' as my code works without it.
*
* Update: The code in the short does work (see collrec2). Just doesn't work when combined with using
* a steps counter. Should only need to use a counter for a loop. You need the '1 + collatz( )' if you don't
* use a steps counter.
**/

int main()
{
    collatz(5);

    return 0;
}

int collatz(int n)
{
    if (n == 1)
    {
        printf(" %d steps \n", 0);
        return 0;
    }
    else if (n % 2 == 0)
    {
        collatz(n/2);
        eprintf(" %d \n", n);
        steps++;
    }
    else
    {
        collatz(3*n + 1);
        eprintf(" %d \n", n);
        steps++;
    }
    printf(" %d steps \n", steps);
    return 0;
}