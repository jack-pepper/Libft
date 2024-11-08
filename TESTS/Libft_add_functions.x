/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft_add_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:13:06 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/07 12:01:40 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* TESTS for additional functions of Libft */

/* ft_putchar_fd */
ADD:
void    ft_putchar_fd(char c, int fd);

int     main(void)
{
        int     fd; 

        fd = open("test.txt", O_CREAT | O_RDWR);
        if (fd == -1) 
                return (1);
        ft_putchar_fd('0', 0); 
        ft_putchar_fd('1', 1); 
        ft_putchar_fd('2', 2); 
        ft_putchar_fd('M', fd);
        close(fd);
}

OUTPUT:
012%
+ A file "test.txt" should contain the char M

/* ft_putstr_fd */
ADD:
void    ft_putstr_fd(char *s, int fd); 

int     main(void)
{
        int     fd; 
 
         fd = open("test.txt", O_CREAT | O_RDWR);
         if (fd == -1)  
                 return (1);
         ft_putstr_fd("[0] 42 \n", 0); 
         ft_putstr_fd("[1] 42 \n", 1); 
         ft_putstr_fd("[2] 42 \n", 2); 
         ft_putstr_fd("You did it! \n", fd);
         close(fd);
}

OUTPUT:
[0] 42 
[1] 42 
[2] 42
+ A file "test.txt" should contain the text "You did it!"

/* ft_putendl_fd */
ADD:
void    ft_putendl_fd(char *s, int fd); 

int     main(void)
{
        int     fd; 
 
         fd = open("test.txt", O_CREAT | O_RDWR);
         if (fd == -1)  
                 return (1);
         ft_putendl_fd("[0] 42", 0); 
         ft_putendl_fd("[1] 42", 1); 
         ft_putendl_fd("[2] 42", 2); 
         ft_putendl_fd("You did it!", fd);
         close(fd);
}

OUTPUT:
[0] 42
[1] 42
[2] 42
+ A file "test.txt" should contain the text "You did it!"

/* ft_putnbr_fd */
ADD:
void    ft_putnbr_fd(int n, int fd);

int     main(void)
{
        int     fd; 

         fd = open("test.txt", O_CREAT | O_RDWR);
         if (fd == -1) 
                 return (1);
         ft_putnbr_fd(-42, 0); 
         ft_putnbr_fd(0, 1); 
         ft_putnbr_fd(5, 2); 
         ft_putnbr_fd(-2147483648, fd);
         close(fd);
}

OUTPUT:
-4205%
+ A file "test.txt" should contain MIN_INT

/* ft_substr */
ADD:
#include <stdio.h>

int     main(void)
{
        char    s[30] = "Hello dirty old silly world";
        printf("Sub: %s \n", ft_substr(s, 6, 9));
        printf("start + len > s_len: %s \n", ft_substr(s, 27, 9));
        printf("Str null: %s \n", ft_substr("", 6, 9));
}

OUTPUT:
Sub: dirty old 
start + len > s_len: (null) 
Str null: (null)

/* ft_strjoin */
ADD:
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2);

int     main(void)
{
        char    str1[] = "Hello";
        char    str2[] = " world";
        char    *catstr = ft_strjoin(str1, str2);
        printf("New str: %s \n", catstr);
}

OUTPUT:
New str: Hello world 

/* ft_striteri */
ADD:
#include <stdio.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char *));
void    to_uppercase(unsigned int i, char *c);

void    to_uppercase(unsigned int i, char *c) 
{
        if (c[i] >= 'a' && c[i] <= 'z') 
        {
                c[i] -= ('a' - 'A');
        }
}

int     main(void)
{
        char    s[20] = "Hello world";
        ft_striteri(s, to_uppercase);
        printf("%s", s); 
}

OUTPUT:
Hello WORLD

/* ft_strmapi */
ADD:
#include <stdio.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    half_eraser(unsigned int index, char c);

int     main(void)
{
        char    s[] = "Hello world";
        char    *res;

        res = ft_strmapi(s, half_eraser);
        if (res != NULL)
        {
                printf("Str: %s \n", res);
                free(res);
        }
}

char    half_eraser(unsigned int index, char c)
{
        if (index % 2 == 0)
        {
                return ('.');
        }
        else
        {
                return (c);
        }
}

OUTPUT:
Str: .e.l. .o.l.

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
