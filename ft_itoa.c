/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:58:07 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 12:08:44 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static int	get_sign(int n);
static int	get_nb_digits(int uns_n);
static void	copy_nb_to_str(char *dest, int uns_nb, int nb_digits, int sign);

char	*ft_itoa(int n)
{
	char	*result_str;
	int		sign;
	int		uns_n;
	int		nb_digits;

	if (n == 0 || n == -0)
		return ("0");
	sign = get_sign(n);
	uns_n = n * sign;
	nb_digits = get_nb_digits(uns_n);
	if (n < 0)
		nb_digits++;
	result_str = (char *)malloc(sizeof(char) * (nb_digits + 1));
	if (result_str == NULL)
		return (NULL);
	copy_nb_to_str(result_str, uns_n, nb_digits, sign);
	return (result_str);
}

static int	get_sign(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

static int	get_nb_digits(int uns_n)
{
	int	nb_digits;

	nb_digits = 1;
	while (uns_n > 9)
	{
		uns_n = uns_n / 10;
		nb_digits++;
	}
	return (nb_digits);
}

static void	copy_nb_to_str(char *dest, int uns_nb, int nb_digits, int sign)
{
	int	i;

	i = nb_digits;
	while (uns_nb > 9)
	{
		i--;
		dest[i] = (uns_nb % 10) + '0';
		uns_nb = uns_nb / 10;
	}
	dest[i - 1] = uns_nb + '0';
	if (sign < 0)
		dest[0] = '-';
	dest[nb_digits] = '\0';
}
