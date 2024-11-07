# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   Libft.c                                            :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:42:41 by mmalie            #+#    #+#              #
/*   Updated: 2024/11/07 08:49:31 by mmalie           ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

/* TESTS for Libft */

/* ft_isalpha */
ADD:

#include <stdio.h>

int     ft_isalpha(int c);

int     main(void)
{
        printf("-A- is (1): %d \n", ft_isalpha('A'));
        printf("-Z- is (1): %d \n", ft_isalpha('Z'));
        printf("-M- is (1): %d \n", ft_isalpha('M'));
        printf("-a- is (1): %d \n", ft_isalpha('a'));
        printf("-z- is (1): %d \n", ft_isalpha('z'));
        printf("-n- is (1): %d \n", ft_isalpha('n'));
        printf("-0- is NOT (0): %d \n", ft_isalpha('0'));
        printf("-9- is NOT (0): %d \n", ft_isalpha('9'));
        printf("-5- is NOT (0): %d \n", ft_isalpha('5'));
        printf("-@- is NOT (0): %d \n", ft_isalpha('@'));
        printf("-[- is NOT (0): %d \n", ft_isalpha('['));
        printf("-`- is NOT (0): %d \n", ft_isalpha('`'));
        printf("-{- is NOT (0): %d \n", ft_isalpha('{'));
        printf("-NUL- is NOT (0): %d \n", ft_isalpha(0));
        printf("-newline- is NOT (0): %d \n", ft_isalpha('\n'));
}

OUTPUT: should match the printf

/* ft_isdigit */
ADD:

#include <stdio.h>

int     ft_isdigit(int c);

int     main(void)
{
        printf("-A- is NOT (0): %d \n", ft_isdigit('A'));
        printf("-Z- is NOT (0): %d \n", ft_isdigit('Z'));
        printf("-M- is NOT (0): %d \n", ft_isdigit('M'));   
        printf("-a- is NOT (0): %d \n", ft_isdigit('a'));
        printf("-z- is NOT (0): %d \n", ft_isdigit('z'));   
        printf("-n- is NOT (0): %d \n", ft_isdigit('n'));
        printf("-0- is (1): %d \n", ft_isdigit('0'));
        printf("-9- is (1): %d \n", ft_isdigit('9'));
        printf("-5- is (1): %d \n", ft_isdigit('5'));
        printf("-/- is NOT (0): %d \n", ft_isdigit('/'));
        printf("-:- is NOT (0): %d \n", ft_isdigit(':'));
        printf("-@- is NOT (0): %d \n", ft_isdigit('@'));
        printf("-[- is NOT (0): %d \n", ft_isdigit('['));
        printf("-`- is NOT (0): %d \n", ft_isdigit('`'));
        printf("-{- is NOT (0): %d \n", ft_isdigit('{'));       
        printf("-NUL- is NOT (0): %d \n", ft_isdigit(0));
        printf("-newline- is NOT (0): %d \n", ft_isdigit('\n'));
}

OUTPUT: should match the printf

/* ft_isalnum */
ADD:

#include <stdio.h>

int     ft_isalnum(int c);

int     main(void)
{
        printf("-A- is (1): %d \n", ft_isalnum('A'));
        printf("-Z- is (1): %d \n", ft_isalnum('Z'));
        printf("-M- is (1): %d \n", ft_isalnum('M'));
        printf("-a- is (1): %d \n", ft_isalnum('a'));
        printf("-z- is (1): %d \n", ft_isalnum('z'));
        printf("-n- is (1): %d \n", ft_isalnum('n'));
        printf("-0- is (1): %d \n", ft_isalnum('0'));
        printf("-9- is (1): %d \n", ft_isalnum('9'));
        printf("-5- is (1): %d \n", ft_isalnum('5'));
        printf("-/- is NOT (0): %d \n", ft_isalnum('/'));
        printf("-:- is NOT (0): %d \n", ft_isalnum(':'));
        printf("-@- is NOT (0): %d \n", ft_isalnum('@'));
        printf("-[- is NOT (0): %d \n", ft_isalnum('['));
        printf("-`- is NOT (0): %d \n", ft_isalnum('`'));
        printf("-{- is NOT (0): %d \n", ft_isalnum('{'));
        printf("-NUL- is NOT (0): %d \n", ft_isalnum(0));
        printf("-newline- is NOT (0): %d \n", ft_isalnum('\n'));
}

OUTPUT: should match the printf

/* ft_isascii */
ADD:

#include <stdio.h>

int     ft_isascii(int c);

int     main(void)
{
        printf("-A- is (1): %d \n", ft_isascii('A'));
        printf("-Z- is (1): %d \n", ft_isascii('Z'));
        printf("-M- is (1): %d \n", ft_isascii('M'));
        printf("-a- is (1): %d \n", ft_isascii('a'));
        printf("-z- is (1): %d \n", ft_isascii('z'));
        printf("-n- is (1): %d \n", ft_isascii('n'));
        printf("-0- is (1): %d \n", ft_isascii('0'));
        printf("-9- is (1): %d \n", ft_isascii('9'));
        printf("-5- is (1): %d \n", ft_isascii('5'));
        printf("-/- is (1): %d \n", ft_isascii('/'));
        printf("-:- is (1): %d \n", ft_isascii(':'));
        printf("-@- is (1): %d \n", ft_isascii('@'));
        printf("-[- is (1): %d \n", ft_isascii('['));
        printf("-`- is (1): %d \n", ft_isascii('`'));
        printf("-{- is (1): %d \n", ft_isascii('{'));
        printf("-NUL- is (1): %d \n", ft_isascii(0));
        printf("-newline- is (1): %d \n", ft_isascii('\n'));
        printf("-DEL- is (1): %d \n", ft_isascii(127));
        printf("-128- is NOT (0): %d \n", ft_isascii(128));
        printf("-(-1)- is NOT (0): %d \n", ft_isascii(-1));
        printf("-777- is NOT (0): %d \n", ft_isascii(777));
}

OUTPUT: should match the printf

/* ft_isprint */
ADD:
#include <stdio.h>

int     ft_isprint(int c);

int     main(void)
{
        printf("-A- is (1): %d \n", ft_isprint('A'));
        printf("-Z- is (1): %d \n", ft_isprint('Z'));
        printf("-M- is (1): %d \n", ft_isprint('M'));
        printf("-a- is (1): %d \n", ft_isprint('a'));
        printf("-z- is (1): %d \n", ft_isprint('z'));
        printf("-n- is (1): %d \n", ft_isprint('n'));
        printf("-0- is (1): %d \n", ft_isprint('0'));
        printf("-9- is (1): %d \n", ft_isprint('9'));
        printf("-5- is (1): %d \n", ft_isprint('5'));
        printf("-/- is (1): %d \n", ft_isprint('/'));
        printf("-:- is (1): %d \n", ft_isprint(':'));
        printf("-@- is (1): %d \n", ft_isprint('@'));
        printf("-[- is (1): %d \n", ft_isprint('['));
        printf("-`- is (1): %d \n", ft_isprint('`'));
        printf("-{- is (1): %d \n", ft_isprint('{'));
        printf("-NUL- is NOT (0): %d \n", ft_isprint(0));
        printf("-newline- is NOT (0): %d \n", ft_isprint('\n'));
        printf("-DEL- is NOT (0): %d \n", ft_isprint(127));
        printf("-128- is NOT (0): %d \n", ft_isprint(128));
        printf("-(-1)- is NOT (0): %d \n", ft_isprint(-1));
        printf("-777- is NOT (0): %d \n", ft_isprint(777));
        printf("-31- is NOT (0): %d \n", ft_isprint(31));
}

OUTPUT: should match the printf

/* ft_toupper */
ADD:

#include <stdio.h>

int     ft_toupper(int c);

int     main(void)
{
        printf("-A- is (A): %c \n", ft_toupper('A'));
        printf("-Z- is (Z): %c \n", ft_toupper('Z'));
        printf("-M- is (M): %c \n", ft_toupper('M'));
        printf("-a- is (A): %c \n", ft_toupper('a'));
        printf("-z- is (Z): %c \n", ft_toupper('z'));
        printf("-n- is (N): %c \n", ft_toupper('n'));
        printf("-0- is (0): %c \n", ft_toupper('0'));
        printf("-9- is (9): %c \n", ft_toupper('9'));
        printf("-5- is (5): %c \n", ft_toupper('5'));
        printf("-/- is (/): %c \n", ft_toupper('/'));
        printf("-:- is (:): %c \n", ft_toupper(':'));
        printf("-@- is (@): %c \n", ft_toupper('@'));
        printf("-[- is ([): %c \n", ft_toupper('['));
        printf("-`- is (`): %c \n", ft_toupper('`'));
        printf("-{- is ({): %c \n", ft_toupper('{'));
        printf("-128- is NOT (0): %c \n", ft_toupper(128));
        printf("-(-1)- is NOT (0): %c \n", ft_toupper(-1));
        printf("-777- is NOT (0): %c \n", ft_toupper(777));
        printf("-31- is NOT (0): %c \n", ft_toupper(31));
}

OUTPUT: should match the printf (except the fourth last)

/* ft_tolower */
ADD:

#include <stdio.h>

int     ft_tolower(int c);

int     main(void)
{
        printf("-A- is (a): %c \n", ft_tolower('A'));
        printf("-Z- is (z): %c \n", ft_tolower('Z'));
        printf("-M- is (m): %c \n", ft_tolower('M'));
        printf("-a- is (a): %c \n", ft_tolower('a'));
        printf("-z- is (z): %c \n", ft_tolower('z'));
        printf("-n- is (n): %c \n", ft_tolower('n'));
        printf("-0- is (0): %c \n", ft_tolower('0'));
        printf("-9- is (9): %c \n", ft_tolower('9'));
        printf("-5- is (5): %c \n", ft_tolower('5'));
        printf("-/- is (/): %c \n", ft_tolower('/'));
        printf("-:- is (:): %c \n", ft_tolower(':'));
        printf("-@- is (@): %c \n", ft_tolower('@'));
        printf("-[- is ([): %c \n", ft_tolower('['));
        printf("-`- is (`): %c \n", ft_tolower('`'));
        printf("-{- is ({): %c \n", ft_tolower('{'));
        printf("-128- is NOT (0): %c \n", ft_tolower(128));
        printf("-(-1)- is NOT (0): %c \n", ft_tolower(-1));
        printf("-777- is NOT (0): %c \n", ft_tolower(777));
        printf("-31- is NOT (0): %c \n", ft_tolower(31));
}

OUTPUT: should match the printf

/* ft_atoi */
ADD:

#include <stdio.h>

int             ft_atoi(const char *nptr);

int     main(void)
{
        printf("-0- is %d \n", ft_atoi("0"));
        printf("-5- is %d \n", ft_atoi("5"));
        printf("-56789- is %d \n", ft_atoi("-56789"));
        printf("-  +56  - is %d \n", ft_atoi("  +56  "));
        printf("-       -154 - is %d \n", ft_atoi("     -154 "));
        printf("-- is %d (can be undefined) \n", ft_atoi(""));
        printf("-123456789123456789- is %d (outbound) \n", ft_atoi("123456789123456789"));
        printf("--0- is %d \n", ft_atoi("-0"));
        printf("-+0- is %d \n", ft_atoi("+0"));
}

OUTPUT: same as printf

/* ft_strlen */
ADD:

#include <stdio.h>

size_t  ft_strlen(const char *s);

int     main(void)
{
        printf("-Hello- is (5): %ld \n", ft_strlen("Hello"));
        printf("- Hello world - is (13): %ld \n", ft_strlen(" Hello world "));
        printf("-- is (0): %ld \n", ft_strlen(""));
        printf("-H- is (1): %ld \n", ft_strlen("H"));
        printf("-123456789 {[=___=]}\\n- is (20): %ld \n", ft_strlen("123456789 {[=___=]}\n"));
}

OUTPUT: same as printf

/* ft_memset */
ADD:

#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n);

int     main(void)
{
        char    s1[] = {"Hello world"};
        ft_memset(s1, 86, 5);
        printf("Ptr: %p - First char: %c - New s1: %s \n", s1, *s1, s1);
        char    s2[] = {"Hello world"};
        ft_memset(s2, '0', 7);
        printf("Ptr: %p - Second char: %c - New s2: %s \n", s2, *s2, s2);
}

OUTPUT: (Variable addresses)
Ptr: 0x7ffe8a81efa0 - First char: V - New s1: VVVVV world 
Ptr: 0x7ffe8a81efac - Second char: 0 - New s2: 0000000orld 

/* ft_bzero */
ADD:
#include <stdio.h>

void    ft_bzero(void *s, size_t n);

int     main(void)
{
        char    s1[] = {"Hello world"};
        ft_bzero(s1, 5);
        printf("Ptr: %p - First char: %c - New s1: %s \n", s1, *s1, s1 + 5);
        char    s2[] = {"Hello world"};
        ft_bzero(s2, 9);
        printf("Ptr: %p - Second char: %c - New s2: %s \n", s2, *s2, s2 + 9);
}

OUTPUT: (Adresses can vary)
Ptr: 0x7ffdfb1973a0 - First char:  - New s1:  world
Ptr: 0x7ffdfb1973ac - Second char:  - New s2: ld

/* ft_memcpy */
ADD:

#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n);

int     main(void)
{
        char    dest[30] = {""};
        char    src[30] = {"Hello world"};
        ft_memcpy(dest, src, 5);
        printf("Src: %s - Dest: %s \n", src, dest);
	ft_memcpy(dest, src, 50);
        printf("Src: %s - Dest: %s \n", src, dest);

}

OUTPUT:
Src: Hello world - Dest: Hello 
Src: ���� - Dest: Hello world (should be undefined behaviour)

/* ft_strchr */
ADD:

#include <stdio.h>

int     main(void)
{
        const char      s1[20] = "Hello world Hello";
        printf("Ptr start: %p - %s - Ptr returned: %p \n", s1 + 7, ft_strchr(s1, 'w'), s1 + 7);
        const char      s2[20] = "Hello world Hello";
        printf("Ptr start: %p - %s - Ptr returned: %p \n", s2 + 17, ft_strchr(s2, '\0'), s2 + 17);
}

OUTPUT: (The addresses should be identical for each call)
Ptr start: 0x7ffc84243177 - world Hello - Ptr returned: 0x7ffc84243177
Ptr start: 0x7ffc842431a1 -  - Ptr returned: 0x7ffc842431a1

/* ft_memchr */
ADD:
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n);

int     main(void)
{
        char    s1[20] = {"Hello world"};
        printf("Found w in Hello world /8/: (1) %d \n", ((ft_memchr(s1, 'w', 8)) != NULL));
        printf("Found w in Hello world /3/: (0) %d \n", ((ft_memchr(s1, 'w', 3)) != NULL));
        printf("Found x in Hello world /9/: (0) %d \n", ((ft_memchr(s1, 'x', 9)) != NULL));
        printf("Found null in empty string /8/: (1) %d \n", ((ft_memchr("", '\0', 8)) != NULL));
        printf("Found null in Hello world /8/: (0) %d \n", ((ft_memchr(s1, '\0', 8)) != NULL));
        printf("Found null in Hello world /30/: (1) %d \n", ((ft_memchr(s1, '\0', 30)) != NULL));
}

OUTPUT:
Found w in Hello world /8/: (1) 1
Found w in Hello world /3/: (0) 0
Found x in Hello world /9/: (0) 0
Found null in empty string /8/: (1) 1
Found null in Hello world /8/: (0) 0
Found null in Hello world /30/: (1) 1

/* ft_memcmp */
ADD:
#include <stdio.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n);

int     main(void)
{
        printf("s1 = s2 /0/ (0) %d \n", ft_memcmp("Hello", "Hello", 4));
        printf("s1 = s2 /4/ (0) %d \n", ft_memcmp("Hello", "Hello", 4));
        printf("s1 < s2 /4/ (-) %d \n", ft_memcmp("Hello", "Helxx", 4));
        printf("s1 > s2 /4/ (+) %d \n", ft_memcmp("Helxx", "Helpo", 4));
        printf("empty s1 /4/ (0) %d \n", ft_memcmp("", "Hello", 4));
        printf("empty s2 /4/ (0) %d \n", ft_memcmp("Hello", "", 4));
        printf("both empty /4/ (0) %d \n", ft_memcmp("", "", 4));
}

OUTPUT:
s1 = s2 /0/ (0) 0
s1 = s2 /4/ (0) 0
s1 < s2 /4/ (-) -12
s1 > s2 /4/ (+) 8
empty s1 /4/ (0) 0
empty s2 /4/ (0) 0
both empty /4/ (0) 0

/* ft_strncmp */
ADD:
#include <stdio.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n);

int     main(void)
{
        printf("s1 = s2 /0/ (0) %d \n", ft_strncmp("Hello", "Hello", 4));
        printf("s1 = s2 /4/ (0) %d \n", ft_strncmp("Hello", "Hello", 4));
        printf("s1 < s2 /4/ (-) %d \n", ft_strncmp("Hello", "Helxx", 4));
        printf("s1 > s2 /4/ (+) %d \n", ft_strncmp("Helxx", "Helpo", 4));
        printf("empty s1 /4/ (-) %d \n", ft_strncmp("", "Hello", 4));
        printf("empty s2 /4/ (+) %d \n", ft_strncmp("Hello", "", 4));
        printf("both empty /4/ (0) %d \n", ft_strncmp("", "", 4));      
}

OUTPUT:
s1 = s2 /0/ (0) 0 
s1 = s2 /4/ (0) 0 
s1 < s2 /4/ (-) -12 
s1 > s2 /4/ (+) 8 
empty s1 /4/ (-) -72 
empty s2 /4/ (+) 72 
both empty /4/ (0) 0

/* ft_calloc */
ADD:
#include <stdio.h>

void    *ft_calloc(size_t nmemb, size_t size);

int     main(void)
{
        char    *array;

        array = ft_calloc(50, 4);
        printf("Array: %s", array);
        free(array);
        array = NULL;
}

OUTPUT: Should display an empty array. 
-Replace the 0 by any char in the function to make it visible.
-Change nmemb and size to 0
-Try with oversized values

/* ft_strlcat */
ADD:
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

int     main(void)
{
        char    dst[20] = {"Hello"};
        printf("Case 1 dstsize == 0 (6) : %ld \n", ft_strlcat(dst, " world", 0));
        printf("Dest: %s \n \n", dst);
        printf("Case 2 dstsize == 1 (7) : %ld \n", ft_strlcat(dst, " world", 1));
        printf("Dest: %s \n \n", dst);
        printf("Case 3 dstsize <= dst_len (11) : %ld \n", ft_strlcat(dst, " world", 3));
        printf("Dest: %s \n \n", dst);
        printf("Case 4 dstsize > dst_len (11) : %ld \n", ft_strlcat(dst, " world", 12));
        printf("Dest: %s \n \n", dst);
}

OUTPUT:
Case 1 dstsize == 0 (6) : 6
Dest: Hello

Case 2 dstsize == 1 (7) : 7
Dest: Hello

Case 3 dstsize <= dst_len (11) : 11
Dest: Hello

Case 4 dstsize > dst_len (11) : 11
Dest: Hello world

/* ft_strdup */
ADD:
#include <stdio.h>

char    *ft_strdup(const char *s);

int     main(void)
{
        const char      s[] = {"Hello world"};
        printf("Dup: %s - Pointer: %p \n", ft_strdup(s), ft_strdup(s));
}

OUTPUT:
Dup: Hello world - Pointer: 0x5a0770c262a0 (address may vary)

/* ft_strlcpy */
ADD:
#include <stdio.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size);

int     main(void)
{
        char    src[] = "Hello world";
        char    dst1[5];
        char    dst2[11];
        char    dst3[20];
	printf("[0/5] Res: %ld - %s \n", ft_strlcpy(dst1, src, 0), dst1);
        printf("[1/5] Res: %ld - %s \n", ft_strlcpy(dst1, src, 1), dst1);
        printf("[5/5] Res: %ld - %s \n", ft_strlcpy(dst1, src, 5), dst1);
        printf("[11/11] Res: %ld - %s \n", ft_strlcpy(dst2, src, 11), dst2);
        printf("[20/20] Res: %ld - %s \n", ft_strlcpy(dst3, src, 20), dst3);
        printf("[10/5] Res: %ld - %s \n", ft_strlcpy(dst1, src, 10), dst1);
}

OUTPUT:
[0/5] Res: 11 -  
[1/5] Res: 11 -
[5/5] Res: 11 - Hell
[11/11] Res: 11 - Hello worl
[20/20] Res: 11 - Hello world
[10/5] Res: 11 - Hello wor

/* ft_memmove */
ADD:


OUTPUT:



/* */
/* */
/* */
/* */
/* */
/* */
