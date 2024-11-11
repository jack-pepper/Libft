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

/* ft_split */
ADD:
#include <stdio.h>

int     main(void)
{
        char const      s[60] = "hello.world.how.are.you.doing";
        char const      s2[60] = "...hello.world.how.are.you.doing...";
        char const      s3[60] = "";
        char const      s4[60] = "helloworldhowareyoudoing";

    // Test case 1: Splitting by '.'
    printf("Test 1: Splitting by '.':\n");
    char **result = ft_split(s, '.');
    for (int i = 0; result[i] != NULL; i++) {
        printf("Token %d: %s\n", i, result[i]);
        free(result[i]);
    }
    free(result);

    // Test case 2: Splitting by '.' with leading and trailing delimiters
    printf("\nTest 2: Splitting by '.':\n");
    result = ft_split(s2, '.');
    for (int i = 0; result[i] != NULL; i++) {
        printf("Token %d: %s\n", i, result[i]);
        free(result[i]);
    }
    free(result);

// Test case 3: Empty string
    printf("\nTest 3: Splitting an empty string:\n");
    result = ft_split(s3, '.');
    if (result && result[0]) {
        printf("Unexpected non-NULL result\n");
    } else {
        printf("Empty string handled correctly.\n");
    }

    // Test case 4: No delimiters (whole string as one token)
    printf("\nTest 4: No delimiters (whole string as one token):\n");
    result = ft_split(s4, '.');
    for (int i = 0; result[i] != NULL; i++) {
        printf("Token %d: %s\n", i, result[i]);
        free(result[i]);
    }
    free(result);

    // Test case 5: Splitting last string first with '.' and then with 'w'
    printf("\nTest 5: Splitting last string with 'w':\n");
    result = ft_split(s4, 'w');
    for (int i = 0; result[i] != NULL; i++) {
        printf("Token %d: %s\n", i, result[i]);
        free(result[i]);
    }

 free(result);
    return 0;
}

OUTPUT:
Test 1: Splitting by '.':
Token 0: hello
Token 1: world
Token 2: how
Token 3: are
Token 4: you
Token 5: doing

Test 2: Splitting by '.':
Token 0: hello
Token 1: world
Token 2: how
Token 3: are
Token 4: you
Token 5: doing

Test 3: Splitting an empty string:
Empty string handled correctly.

Test 4: No delimiters (whole string as one token):
Token 0: helloworldhowareyoudoing

Test 5: Splitting last string with 'w':
Token 0: hello
Token 1: orldho
Token 2: areyoudoing


/* ft_strtrim */
ADD: 
#include <stdio.h>

int     main(void)
{
        char    s[30] = " . ..!  Hey coucou .!! ";
        char    s2[3] = "";

        printf("Str: \"%s\" \n", ft_strtrim(s, " !."));
        printf("Empty str: \"%s\" \n", ft_strtrim(s2, " !."));
        printf("Empty set: \"%s\" \n", ft_strtrim(s, ""));
}

OUTPUT:
Str: "Hey coucou" 
Empty str: "" 
Empty set: " . ..!  Hey coucou .!! " 

/* ft_itoa */
ADD:
#include <stdio.h>

int     main(void)
{
        printf("[12345]: \"%s\" \n", ft_itoa(12345));
        printf("[5]: \"%s\" \n", ft_itoa(5));   
        printf("[-12345]: \"%s\" \n", ft_itoa(-12345)); 
        printf("[-5]: \"%s\" \n", ft_itoa(-5));
        printf("[0]: \"%s\" \n", ft_itoa(0));
        printf("[-0]: \"%s\" \n", ft_itoa(-0));
}

OUTPUT:
[12345]: "12345" 
[5]: "5" 
[-12345]: "-12345" 
[-5]: "-5" 
[0]: "0" 
[-0]: "0" 


/* ex21 */
/* ex22 */
/* ex23 */
/* ex24 */
/* ex25 */
/* ex26 */
/* ex27 */
