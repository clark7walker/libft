/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:53:36 by cltan             #+#    #+#             */
/*   Updated: 2025/12/04 14:54:00 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	nptr = malloc(len + 1);
	if (!nptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		nptr[i] = s[i];
		i++;
	}
	nptr[i] = '\0';
	return (nptr);
}
