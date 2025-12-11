/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:23:55 by cltan             #+#    #+#             */
/*   Updated: 2025/12/04 16:10:31 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n);
static char	*ft_toa(long n, int sign, int len);

char	*ft_itoa(int n)
{
	long	nbr;
	int		sign;
	int		len;

	nbr = n;
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		nbr = -nbr;
	}
	if (sign == -1)
		len = ft_count(nbr) + 1;
	else
		len = ft_count(nbr);
	return (ft_toa(nbr, sign, len));
}

static int	ft_count(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_toa(long n, int sign, int len)
{
	char	*str;

	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		if (n > 9)
			n = n / 10;
		if (len == 0 && sign == -1)
			str[len] = '-';
	}
	return (str);
}
