/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:36:51 by cltan             #+#    #+#             */
/*   Updated: 2025/12/04 18:04:40 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c_n;
	long	l_n;

	l_n = n;
	if (l_n < 0)
	{
		write(fd, "-", 1);
		l_n *= -1;
	}
	if (l_n >= 0 && l_n <= 9)
	{
		c_n = l_n + '0';
		write(fd, &c_n, 1);
	}
	else
	{
		ft_putnbr_fd((l_n / 10), fd);
		ft_putnbr_fd((l_n % 10), fd);
	}
}
