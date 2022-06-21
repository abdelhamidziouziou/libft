/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:41:03 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:41:04 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_strjoin() function allocates (with malloc) and returns a new
**	string, which is the result of the concatenation of ’s1’ and ’s2’.
**		It returns the new string or NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1 == NULL)
	{
		ptr = ft_strdup(s2);
		return (ptr);
	}
	ptr = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[len_s1 + len_s2] = '\0';
	ft_strlcpy(ptr, s1, len_s1 + 1);
	ft_strlcat(ptr + (len_s1), s2, len_s2 + 1);
	return (ptr);
}
