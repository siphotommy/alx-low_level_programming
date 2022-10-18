Siphotommy@alx-low_level_programming:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
Siphotommy@alx-low_level_programming:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
Siphotommy@alx-low_level_programming:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
Siphotommy@alx-low_level_programming:~/0x02$
