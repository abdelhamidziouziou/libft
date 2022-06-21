/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:29:26 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:29:55 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strnstr() function locates the	first occurrence of the	null-
**	terminated string "needle" in the string "haystack", where not more than
**	len characters are searched. Characters that appear after a '\0' character
**	are not searched.
**		If "needle" is an empty string, "haystack" is returned; if "needle"
**	occurs nowhere in "haystack", NULL is returned; otherwise a pointer to
**	the first character of the first occurrence of "needle" is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
