#include <stdio.h>
#include <cs50.h>

/**
* Simple recursive function
* As with all recusive functions, each recursive function call solves a part of the problem
* until the base case is reached. Then each call returns a value to the preceeding call, until
* the first call returns the cumulative value.
**/

void hi(int n);

int main(void)
{
    int buffer = 0;

    printf("Enter a number\n");
    scanf("%d", &buffer);
    hi(buffer);
}

void hi(int n)
{
    // base case
    if (n <= 0)
    {
        printf("Bye!\n");
        return;
    }
    printf("Hi!\n");

    // recursive case
    hi(n-1);
}