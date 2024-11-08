/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:58:07 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 10:11:52 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*result_str;
	size_t		i;
	size_t		unsigned_n;
	size_t		nb_of_digits;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	unsigned_n = n * sign;
	nb_of_digits = 0;
	if (n == 0)
		nb_of_digits++;
	while (unsigned_n > 0)
	{
		unsigned_n = unsigned_n / 10;
		nb_of_digits++;
		printf("Nb_of_digits: %ld \n", nb_of_digits);
	}
	if (sign < 0)
	{
		nb_of_digits++;
		result_str = malloc(nb_of_digits + 2);
	}
	else
		result_str = malloc(nb_of_digits + 1);
	if (result_str == NULL)
		return (NULL);
	
	i = nb_of_digits;
	unsigned_n = n * sign;
	while (i > 0)
	{
		result_str[i - 1] = (unsigned_n % 10) + '0';
		unsigned_n = unsigned_n / 10;
		i--;
	}
	if (sign < 0)
		result_str[0] = '-';
	result_str[i + nb_of_digits] = 'E';
	return (result_str);
}

int	main(void)
{
	ft_putstr(ft_itoa(12345));
	ft_putchar('\n');
	ft_putstr(ft_itoa(5));	
	ft_putchar('\n');
	ft_putstr(ft_itoa(-12345));	
	ft_putchar('\n');
	ft_putstr(ft_itoa(-5));
	ft_putchar('\n');
	ft_putstr(ft_itoa(0));
	ft_putchar('\n');
	ft_putstr(ft_itoa(-0));
}
