#include <unistd.h>

void    print_numbers(void)
{
    char nb;
	char newline;

    nb = '0';
	newline = '\n';
    while (nb <= '9')
    {
        write(1, &nb, 1);
        ++nb;
    }
    write(1,&newline ,1);
}

int        main(void)
{
    print_numbers();
    return (0);
}
