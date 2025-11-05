#include <stdio.h>

int main() 
{
    int a = 0, b = 1, c;
    int sum = 0;

    printf("Fibonacci series up to 1000 (using while loop):\n");

    while (a <= 1000) 
	{
        printf("%d ", a);
        if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0 && a != 0)
            sum += a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, and 7: %d\n", sum);

    return 0;
}

// for loop //

/*#include <stdio.h>
int main()
{
    int a = 0, b = 1, c;
    int sum = 0;

    printf("Fibonacci series up to 1000 (using for loop):\n");

    for (a = 0, b = 1; a <= 1000; ) 
	{
        printf("%d ", a);
        if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0 && a != 0)
            sum += a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, and 7: %d\n", sum);

    return 0;
} */

/*The while loop is more efficient here because it directly checks the Fibonacci value (a <= 1000) each time without unnecessary iteration control.
It suits this program better since we don’t know how many terms will appear before reaching 1000.
It uses fewer control steps than a for loop and keeps the logic simpler.
So, the while loop is the more efficient choice for this Fibonacci program. */
