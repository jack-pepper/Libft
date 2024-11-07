/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:46:19 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/07 08:46:24 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	arr_size;

	if (nmemb == 0 || size == 0 || nmemb > (SIZE_MAX / size))
	{
		return (NULL);
	}
	arr_size = (nmemb * size);
	array = malloc(arr_size);
	if (array == NULL)
	{
		return (NULL);
	}
	ft_memset(array, 0, arr_size);
	return (array);
}
