/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:36:00 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/04 15:36:03 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Faire plusieurs fonctions: ft_strtrim_start / ft_strstrim_end ?

char	*ft_strtrim(char const *s)
{
	char	*trimmed_s;
	size_t	start;
	size_t	end;
	size_t	len; // Can be suppressed... saves a couple of lines
	size_t	i;

	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	end = start;
	while (s[end] != '\0')
		end++;
	end--;
	while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	len = end - start + 1;
	trimmed_s = (char *)malloc(sizeof(char) * len);
	if (trimmed_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed_s[i] = s[start + i];
		i++;
	}
	trimmed_s[i] = '\0';
	return (trimmed_s);
}

int	main(void)
{
	char	s[30] = "   Hey coucou  ";
	printf("Str: %s", ft_strtrim(s));
}
