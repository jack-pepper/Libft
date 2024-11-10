/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:58:07 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 12:08:44 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little || little[0] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' || i <= len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] != '\0')
			{
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
