/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:35:37 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/04 15:35:40 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if (s == NULL || f == NULL)
	{
		return;
	}
	while (*s)
	{
		f(5, s);
		s++;
	}
}

void to_uppercase(unsigned int i, char *c)
{
	if (c[i] >= 'a' && c[i] <= 'z') {
        c[i] -= ('a' - 'A'); // Convert to uppercase
    }
}

int	main(void)
{
	char	s[20] = "Hello world";
	ft_striteri(s, to_uppercase);
	printf("%s", s);
}
