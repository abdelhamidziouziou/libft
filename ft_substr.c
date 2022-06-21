/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:42:36 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:42:37 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_substr() function allocates (with malloc) and returns a substring
**	from the string ’s’. The substring begins at index ’start’ and is of maximum
**	size ’len’.
**		It returns the substring or NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	size_t	size_malloc;
	char	*ptr;

	if (!s)
		return (0);
	i = 0;
	len_s = ft_strlen(s);
	size_malloc = 0;
	while (size_malloc < len && size_malloc < len_s)
		size_malloc++;
	ptr = (char *)malloc((size_malloc + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s[i] != '\0' && i < len && start < len_s)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
