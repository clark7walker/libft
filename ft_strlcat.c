/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:56:55 by cltan             #+#    #+#             */
/*   Updated: 2025/12/06 18:16:17 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstl >= size)
		return (srcl + size);
	else
	{
		i = 0;
		while (src[i] != '\0' && ((dstl + i + 1) < size))
		{
			dst[dstl + i] = src[i];
			i++;
		}
		dst[dstl + i] = '\0';
	}
	return (dstl + srcl);
}
