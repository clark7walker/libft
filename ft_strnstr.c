/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 00:26:51 by cltan             #+#    #+#             */
/*   Updated: 2025/12/11 14:14:47 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	else if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	j = 0;
	while (i < len || haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j]
			&& haystack[i + j] != '\0'
			&& (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
