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

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "Hello world";
	char	dest[20];

	ft_memmove(dest, src, 5);
	printf("Src pointer: %p - Dest pointer: %p - Dest: %s \n", src, dest, dest);

	char	*dest2;
	dest2 = src + 2;

	ft_memmove(dest2, src, 5);
	printf("Src pointer: %p - Dest2 pointer: %p - Dest2: %s \n", src, dest2, dest2);

}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_uc;
	const unsigned char	*src_uc;
	size_t				i;

	i = 0;
	dest_uc = (unsigned char *)dest;
	src_uc = (const unsigned char *)src;
	if (dest_uc < src_uc)
	{
		while (i < n)
		{
			dest_uc[i] = src_uc[i];
			i++;
		}
	}
	else if (dest_uc > src_uc)
	{
		i = n;
		while (i > 0)
		{
			dest_uc[i] = src_uc[i];
			i--;
		}
	}
	return (dest);
}
