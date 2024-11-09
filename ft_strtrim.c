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

char		*ft_strtrim(char const *s1, char const *set);
static int	map(char const *s1, int s1_len, char const *set, int *start_i);
static int	is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s;
	int		trim_len;
	int		start_i;
	int		s1_len;
	int		set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (set_len == 0 || s1_len == 0)
		return ((char *)s1);
	start_i = 0;
	trim_len = map(s1, s1_len, set, &start_i);
	if (trim_len <= 0)
		return (malloc(1));
	trimmed_s = (char *)malloc(sizeof(char) * trim_len + 1);
	if (trimmed_s == NULL)
		return (NULL);
	ft_strlcpy(trimmed_s, &s1[start_i], trim_len + 1);
	return (trimmed_s);
}

static int	map(char const *s1, int s1_len, char const *set, int *start_i)
{
	int	trim_len;
	int	end_i;

	trim_len = s1_len;
	if (is_in_set(s1[0], set) == 1)
	{
		while (is_in_set(s1[*start_i], set) == 1)
		{
			trim_len--;
			(*start_i)++;
		}
	}
	end_i = s1_len - 1;
	if (is_in_set(s1[end_i], set) == 1)
	{
		while (is_in_set(s1[end_i], set) == 1)
		{
			trim_len--;
			end_i--;
		}
	}
	return (trim_len);
}

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
