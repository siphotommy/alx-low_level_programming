Siphotommy@alx-low_level_programming:~/0x02$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
Siphotommy@alx-low_level_programming:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
Siphotommy@alx-low_level_programming:~/0x02$ ./7-last_digit 
8044
Siphotommy@alx-low_level_programming:~/0x02$ 
