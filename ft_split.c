/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:57:39 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 12:08:22 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	**ft_split(char const *s, char c);
int	count_tokens(char const *s, char delim);
char	**store_tokens(char const *s, char delim, char **array);
char	**malloc_storage(char **array, int i, int token_len);

int	main(void)
{
	char const s[60] = "hello.world.how.are.you.doing";
	char const s2[60] = "...hello.world.how.are.you.doing...";
	char const s3[60] = "";
	char const s4[60] = "helloworldhowareyoudoing";

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
    char **result2 = ft_split(s2, '.');
    for (int i = 0; result2[i] != NULL; i++) {
        printf("Token %d: %s\n", i, result2[i]);
        free(result2[i]);
    }
    free(result2);

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
    printf("\nTest 5: Splitting last string with '.' then 'w':\n");
    result = ft_split(s, '.');
    if (result && result[5] != NULL) {
        char **result2 = ft_split(result[5], 'w');
        for (int i = 0; result2[i] != NULL; i++) {
            printf("Token %d: %s\n", i, result2[i]);
            free(result2[i]);
        }
        free(result2);
    }

    // Cleanup final result array
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}

char	**ft_split(char const *s, char c)
{
	char	**array = NULL;
	int	nb_tokens;

	nb_tokens = count_tokens(s, c);
	array = (char **)malloc((nb_tokens + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	store_tokens(s, c, array);
	return (array);
}

int	count_tokens(char const *s, char delim)
{
	int	nb_tokens;
	int	i;

	nb_tokens = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == delim && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != delim && s[i] != '\0')
		{
			nb_tokens++;
			while (s[i] != delim && s[i] != '\0')
				{
					i++;
				}
		}
	}
	return (nb_tokens);
}

char	**store_tokens(char const *s, char delim, char **array)
{
	int	i;
	int	j;
	int	token_len;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] == delim && s[j] != '\0')
			j++;
		if (s[j] != delim && s[j] != '\0')
		{
			token_len = 0;
			while (s[j + token_len] != delim && s[j + token_len] != '\0')
				token_len++;
			array = malloc_storage(array, i, token_len);
			ft_strlcpy(array[i], &s[j], token_len + 1);
			j += token_len;
			i++;
		}
	}
	array[i] = NULL;
	return (array);
}

char	**malloc_storage(char **array, int i, int token_len)
{
	int	j;

	array[i] = (char *)malloc((token_len + 1) * sizeof(char));
	if (array[i] == NULL)
	{
		j = 0;
		while (j < i)
		{
			free(array[j]);
			j++;
		}
		free(array);
		return (NULL);
	}
	return (array);
}
