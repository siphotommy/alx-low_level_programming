Siphotommy@alx-low_level_programming:~/$ cat 10-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
Siphotommy@alx-low_level_programming:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
Siphotommy@alx-low_level_programming:~/0x02$ ./10-add 
98
Siphotommy@alx-low_level_programming:~/0x02$ 
