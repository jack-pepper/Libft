/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:02:51 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/07 12:02:57 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

// Mismatch with the empty string null term address and the start address

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	str[] = "Hello world";
	char	empty[] = "";

	printf("Start: %p - Last l: %p - Last char: %p - Null term: %p \n", str, str + 9, str + 10, str + 11);
	printf("Empty string ('a'): %s \n", ft_strrchr(empty, 'a'));
	printf("Empty string ('null term'): %s - Pointer: %p \n", ft_strrchr(empty, '\0'), ft_strrchr(empty, '\0'));
	printf("Result: %s - Pointer: %p \n", ft_strrchr(str, 'g'), ft_strrchr(str, 'g'));
	printf("Result: %s - Pointer: %p \n", ft_strrchr(str, 'l'), ft_strrchr(str, 'l'));
	printf("Result: %s - Pointer: %p \n", ft_strrchr(str, '\0'), ft_strrchr(str, '\0'));
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	
	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s);
	}
	s--;
	while (len > 0)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s--;
		len--;
	}
	return (NULL);
}
