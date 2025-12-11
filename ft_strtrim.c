/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:06:23 by cltan             #+#    #+#             */
/*   Updated: 2025/12/09 14:06:16 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char const *set, char c);
static char	*ft_create_str(char const *s, size_t start, size_t end);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	start = 0;
	while (ft_trim(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_trim(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_create_str(s1, start, end));
}

static int	ft_trim(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_create_str(char const *s, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	str = ft_calloc((end - start + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
