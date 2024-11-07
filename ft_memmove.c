/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:35:00 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/07 09:55:39 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_uc;
	const unsigned char	*src_uc;
	size_t				i;

	if (dest == src || n == 0)
		return (dest);
	dest_uc = (unsigned char *)dest;
	src_uc = (const unsigned char *)src;
	if (dest_uc < src_uc)
	{
		while (n--)
			*dest_uc++ = *src_uc;
	}
	else if (dest_uc > src_uc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_uc[i] = src_uc[i];
		}
	}
	return (dest);
}
