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
/*
#include "libft.h"

#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	//char const	s[30] = "hello.world.how.are.you.doing";
	char const	s2[30] = "hello.world.how.are.you.doing.";
	//char const	s3[30] = "";
	char const	s4[30] = "helloworldhowareyoudoing";

	//printf("[0] %s", *(ft_split(s, '.')));
	ft_split(s2, '.');
	//ft_split(s3, '.');
	ft_split(s4, '.');
	ft_split(s4, 'w');
	printf("OK");
}

char	**ft_split(char const *s, char c)
{
	char	**array = NULL;
	int	nb_of_substr;
	int	str_i;
	int	char_i;

	nb_of_substr = 0;
	while (*s)
	{
		if (*s == c)
		{
			nb_of_substr++;
		}
	}
	array = malloc((nb_of_substr + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	str_i = 0;
	char_i = 0;
	while (str_i < nb_of_substr)
	{
		while (s[char_i] != c)
		{
			ft_strlcpy(&array[str_i][char_i], s, 1);
			char_i++; 
		}
		str_i++;
	}
	return (array);
}
*/
