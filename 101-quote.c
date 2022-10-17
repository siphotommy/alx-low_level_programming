siphotommy@alx-low_level_programming:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
siphotommy@alx-low_level_programming:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
siphotommy@alx-low_level_programming:~/c/0x00$ echo $?
1
siphotommy@alx-low_level_programming:~/c/0x00$ ./quote 2> q
siphotommy@alx-low_level_programming:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
siphotommy@alx-low_level_programming:~/c/0x00$ grep printf < 101-quote.c
siphotommy@alx-low_level_programming:~/c/0x00$ grep put < 101-quote.c
siphotommy@alx-low_level_programming:~/c/0x00$ 
