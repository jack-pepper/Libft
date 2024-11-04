/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:35:29 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/04 15:35:30 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*dup_p;
	size_t	len;

	if (s == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	dup_p = dup;
	while (*s)
	{
		*dup = *s;
		dup++;
		s++;
	}
	*dup = '\0';
	return (dup_p);
}
