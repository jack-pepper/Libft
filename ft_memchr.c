/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:45:28 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/07 08:45:35 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_p;

	if (s != NULL)
	{
		s_p = (const unsigned char *)s;
		while (n > 0)
		{
			if (*s_p == (unsigned char)c)
			{
				return ((void *)s_p);
			}
			s_p++;
			n--;
		}
	}
	return (NULL);
}
