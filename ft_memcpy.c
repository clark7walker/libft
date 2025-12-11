/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:09:15 by cltan             #+#    #+#             */
/*   Updated: 2025/12/04 14:55:57 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ndst;
	char	*nsrc;
	size_t	i;

	ndst = (char *)dst;
	nsrc = (char *)src;
	i = 0;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (ndst);
}
