# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   C-piscine-reloaded.c                               :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:42:41 by mmalie            #+#    #+#              #
/*   Updated: 2024/11/04 13:52:55 by mmalie           ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

/* TESTS for C-piscine-reloaded */

/* ex00 */

/* ex01 */ Files: z | No functions allowed
- launch cat z inside the directory. The output must be Z and a newline.

/* ex02 */


/* ex03 */


/* ex04 */


/* ex05 */


/* ex06 */ Files: ft_print_alphabet.c | Functions: ft_putchar
ADD:

#include <unistd.h>

void    ft_print_alphabet(void);

void    ft_putchar(char c)
{
        write(1, &c, 1); 
}

int     main(void)
{
        ft_print_alphabet();
}

OUTPUT: The alphabet from a to z on a single line

/* ex07 */ Files: 
ADD:

#include <unistd.h>

void    ft_print_alphabet(void);

void    ft_putchar(char c)
{
        write(1, &c, 1); 
}

int     main(void)
{
        ft_print_alphabet();
}

OUTPUT: The digits from 0 to 9 on a single line

/* ex08 */ Files: ft_is_negative.c | Functions: ft_putchar
ADD:

#include <unistd.h>

void    ft_is_negative(int n); 

void    ft_putchar(char c)
{
        write(1, &c, 1); 
}

int     main(void)
{
        ft_is_negative(-1000);
        ft_is_negative(-5);
        ft_is_negative(0);
        ft_is_negative(-0);
        ft_is_negative(1);
        ft_is_negative(5);
        ft_is_negative(1000);
}

OUTPUT: NNPPPPP

/* ex09 */ Files: ft_ft.c | Functions: None
ADD:

#include <stdio.h>

void    ft_ft(int *nbr);

int     main(void)
{
        int     nbr;

        nbr = 0;
        ft_ft(&nbr);
        printf("Nbr: %d", nbr);
}

OUTPUT: Nbr: 42

/* ex10 */ Files: ft_swap.c | Functions: None
ADD:

#include <stdio.h>

void    ft_swap(int *a, int *b);

int     main(void)
{
        int     a;  
        int     b;  

        a = 24; 
        b = 42; 
        printf("Before swap: a = %d | b = %d \n", a, b); 
        ft_swap(&a, &b);
        printf("After swap: a = %d | b = %d \n", a, b); 
}

OUTPUT: 
Before swap: a = 24 | b = 42 
After swap: a = 42 | b = 24 

/* ex11 */ Files: ft_div_mod.c | Functions: None
ADD:
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{
        int     a;  
        int     b;  
        int     div;
        int     mod;

        a = 10; 
        b = 3;
        div = 0;
        mod = 0;
        ft_div_mod(a, b, &div, &mod);
        printf("a = %d | b = %d | div = %d | mod = %d \n", a, b, div, mod);

        a = 3;
        b = 10; 
        div = 0;
        mod = 0;
        ft_div_mod(a, b, &div, &mod);
        printf("a = %d | b = %d | div = %d | mod = %d \n", a, b, div, mod);

        a = 5;
        b = -2; 
        div = 0;
        mod = 0;
        ft_div_mod(a, b, &div, &mod);
        printf("a = %d | b = %d | div = %d | mod = %d \n", a, b, div, mod);
}

OUTPUT: (NB: The division by zero is not tested.)
a = 10 | b = 3 | div = 3 | mod = 1 
a = 3 | b = 10 | div = 0 | mod = 3 
a = 5 | b = -2 | div = -2 | mod = 1

/* ex12 */ Files: ft_iterative_factorial.c | Functions: None
ADD:

#include <stdio.h>

int     ft_iterative_factorial(int nb);

int     main(void)
{
        printf("Fac de -5 (0): %d \n", ft_iterative_factorial(-5));
        printf("Fac de 0 (1): %d \n", ft_iterative_factorial(0));
        printf("Fac de 1 (1): %d \n", ft_iterative_factorial(1));
        printf("Fac de 3 (6): %d \n", ft_iterative_factorial(3));
        printf("Fac de 5 (120): %d \n", ft_iterative_factorial(5));
        printf("Fac de 10 (3628800): %d \n", ft_iterative_factorial(10));
        printf("Fac de 25 (155112...): %d \n", ft_iterative_factorial(25));
}

OUTPUT: (NB: THE LAST ONE exceeds the bonds of int)
Fac de -5 (0): 0 
Fac de 0 (1): 1 
Fac de 1 (1): 1 
Fac de 3 (6): 6 
Fac de 5 (120): 120 
Fac de 10 (3628800): 3628800 
Fac de 25 (155112...): 2076180480

/!\ : Check the problem is solved with ITERATION

/* ex13 */ Files: ft_recursive_factorial.c | Functions: None
ADD:

#include <stdio.h>
 
int     ft_recursive_factorial(int nb); 

int     main(void)
{
        printf("Fac de -5 (0): %d \n", ft_recursive_factorial(-5));
        printf("Fac de 0 (1): %d \n", ft_recursive_factorial(0));
        printf("Fac de 1 (1): %d \n", ft_recursive_factorial(1));
        printf("Fac de 3 (6): %d \n", ft_recursive_factorial(3));
        printf("Fac de 5 (120): %d \n", ft_recursive_factorial(5));
        printf("Fac de 10 (3628800): %d \n", ft_recursive_factorial(10));
        printf("Fac de 25 (155112...): %d \n", ft_recursive_factorial(25));
}

OUTPUT: (NB: THE LAST ONE exceeds the bonds of int)
Fac de -5 (0): 0 
Fac de 0 (1): 1 
Fac de 1 (1): 1 
Fac de 3 (6): 6 
Fac de 5 (120): 120 
Fac de 10 (3628800): 3628800 
Fac de 25 (155112...): 2076180480

/!\ : Check the problem is solved with RECURSION

/* ex14 */

CHECK AGAIN!!!!!!!!


/* ex15 */


/* ex16 */
/* ex17 */
/* ex18 */
/* ex19 */
/* ex20 */
/* ex21 */
/* ex22 */
/* ex23 */
/* ex24 */
/* ex25 */
/* ex26 */
/* ex27 */
