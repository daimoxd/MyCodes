#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("The number %d is a multiple of 3 and 5 'FizzBuzz'\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("The number %d is a multiple of 5 'Buzz'.\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("The number %d is a multiple of 3 'Fizz'.\n", i);
        }
        else
        {
            printf("The number %d is not a multiple of 3 and/or 5.\n", i);
        }
    }
}
