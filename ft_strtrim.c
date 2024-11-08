/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:36:00 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 12:25:06 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	s[30] = "   Hey coucou  ";
	printf("Str: %s", ft_strtrim(s, " "));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s;
	size_t	start;
	size_t	end;
	size_t	len; // Can be suppressed... saves a couple of lines
	size_t	i;

	while (s1[start] == ' ' || s1[start] == '\n' || s1[start] == '\t')
		start++;
	end = start;
	while (s1[end] != '\0')
		end++;
	end--;
	while (end > start && (s1[end] == ' ' || s1[end] == '\n' || s1[end] == '\t'))
		end--;
	len = end - start + 1;
	trimmed_s = (char *)malloc(sizeof(char) * len);
	if (trimmed_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed_s[i] = s1[start + i];
		i++;
	}
	trimmed_s[i] = '\0';
	return (trimmed_s);
}
