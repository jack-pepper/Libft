/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:35:00 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/04 15:35:02 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[20] = "Hello world";
	char	dest[20];

	ft_memmove(dest, src, 5);
	printf("Dest: %s", dest);
}

//  need to improve

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	temp[n];

	if (src == NULL || dest == NULL)
	{
		return (NULL);
	}
	if (*temp != *src && temp != dest)
	{
		ft_memcpy(temp, src, n);
		ft_memcpy(dest, temp, n);
	}
	return (dest);
}

