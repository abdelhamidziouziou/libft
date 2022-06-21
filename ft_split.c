/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:14 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/15 01:43:47 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_split() allocates (with malloc) and returns an array of strings
**	obtained by splitting ’s’ using the character ’c’ as a delimiter. The array
**	must be ended by a NULL pointer.
**		It returns the array of new strings resulting from the split or NULL if
**	the allocation fails.
*/

size_t	ft_strlcpy_split(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	compt;

	compt = 0;
	while (src[compt] != '\0')
	{
		++compt;
	}
	if (size == 0)
		return (compt);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (compt);
}

static char	*this(const char *s, char c)
{
	size_t	i;
	char	*tab;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
	{
		return (NULL);
	}
	ft_strlcpy_split(tab, s, i + 1);
	return (tab);
}

static int	count_words(const char	*s, char c)
{
	size_t	i;
	size_t	compt;

	i = 0;
	compt = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != c && s[i])
		{
			compt++;
		}
		while (s[i] != c && s[i])
		{
			i++;
		}
	}
	return (compt);
}

char	**free_t(unsigned int i, char **tab)
{
	while (i > 0)
	{
		free(tab[i--]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	length;
	char	**tab;

	if (!s)
		return (NULL);
	length = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (length + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < length)
	{
		while (s[0] == c)
		{
			s++;
		}
		tab[i] = this(s, c);
		if (tab[i] == NULL)
			return (free_t(i, tab));
		s = s + ft_strlen(tab[i]);
	}
	tab[i] = 0;
	return (tab);
}
