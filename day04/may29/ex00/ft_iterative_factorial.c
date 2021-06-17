#include <stdio.h>

int    ft_iterative_factorial(int nb)
{
    int factorial;
    int i;

    i = 1;
    factorial = 1;
    if (nb < 0)										// if value is negative return 0
        return (0);
    if (nb == 0)									// if value is zero, return 1, factorial of 0 is 1
        return (1);
    while (i <= nb)									// until value is same as nb , works until i is same or bigger
    {
        factorial *= i;								// factorial * i , 
        i++;										// incrament the value until value is same as nb
    }
    return (factorial);								// same but instead of iterative we use recursive
}

int    main(void)
{
    printf("%d\n", ft_iterative_factorial(5));  	// call function, print returned value
    return 0;
}
