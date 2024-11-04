/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:34:37 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/04 15:34:41 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char * s1_p;
	const unsigned char * s2_p;

	if (s1 != NULL && s2 != NULL)
	{
		s1_p = s1;
		s2_p = s2;
		while (n > 0 && *s1_p && *s2_p)
		{
			if (*s1_p != *s2_p)
			{
				return (*s1_p - *s2_p);
			}
			s1_p++;
			s2_p++;
			n--;
		}
	}
	return (0);
}
