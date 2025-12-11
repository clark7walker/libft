/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:26:40 by cltan             #+#    #+#             */
/*   Updated: 2025/12/05 21:03:22 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ndst;
	const unsigned char	*nsrc;
	size_t				i;

	ndst = (unsigned char *)dst;
	nsrc = (const unsigned char *)src;
	if (ndst > nsrc)
	{
		i = n;
		while (i-- > 0)
			ndst[i] = nsrc[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ndst[i] = nsrc[i];
			i++;
		}
	}
	return (ndst);
}
