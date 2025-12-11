/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cltan <cltan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:45:06 by cltan             #+#    #+#             */
/*   Updated: 2025/12/06 17:51:02 by cltan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c);
static char	*ft_insert(char const *s, char c, int *start, int *end);
static void	free_arr(char **str, int i);

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**str;
	int		i;
	int		start;
	int		end;

	if (!s)
		return (NULL);
	word = ft_count(s, c);
	str = ft_calloc(sizeof(char *), word + 1);
	if (!str)
		return (NULL);
	i = 0;
	start = 0;
	end = 0;
	while (i < word)
	{
		str[i] = ft_insert(s, c, &start, &end);
		if (str[i] == NULL)
			return (free_arr(str, i), NULL);
		i++;
	}
	str[i] = NULL;
	return (str);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[i] != '\0' && s[i] != c)
	{
		i++;
		word++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0))
			word++;
		i++;
	}
	return (word);
}

static char	*ft_insert(char const *s, char c, int *start, int *end)
{
	int			i;
	char		*str;

	while (s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
	str = ft_calloc(sizeof(char), (*end - *start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*start < *end)
	{
		str[i] = s[*start];
		i++;
		(*start)++;
	}
	return (str);
}

static void	free_arr(char **str, int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}
