#include <stdio.h>
#include <cs50.h>

/**
* A recursive function that takes an integer, n, and returns the sum of all consecutive integers between
* n and 1.
**/

int sum(int n);

int main(void)
{
    int buffer = 0;

    printf("Enter a positive number: ");
    scanf("%d", &buffer);
    printf("Sum: %d\n", sum(buffer));
}

int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n-1);
}

/**
 * Why doesn't sum(int n) just return 1 when all the recursive functions have run and n does equal 1 instead
 * of returning the sum of n + every number between n and zero?
 *
 * Because: the sum() function has been called on each number lower than n. Those function calls are taking up
 * memory on the stack and waiting to return a value. The base case has to be reached and returned before each
 * recursive function call can return it's value. Each recursive function call returns a value to the preceding
 * function call so the final / 'highest' RFC returns the cumulative value processed through each RFC.
 *
 * If the function is passed integer 1 then the if condition will apply and the function will return 1.
 * If the function is passed an integer greater than 1, the else condition will apply and the resulting
 * function RFCs will ensure that the result of the function calls is returned rather than just 1 when (by way
 * of the RFCs, 1 is reached).
 *
 * */