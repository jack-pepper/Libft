/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:02:51 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 10:12:31 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_char_found = NULL;

	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			last_char_found = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last_char_found);
}