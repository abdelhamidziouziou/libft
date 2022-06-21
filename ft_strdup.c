/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:56 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:40:58 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strdup() function returns a pointer to a new string which is a
**	duplicate of the string s.  Memory for the new string is obtained with
**	malloc(), and can be freed with free().
**		It returns a pointer to the duplicated string or NULL if insufficient
**	memory was available.
*/

char	*ft_strdup(const char *s1)
{
	char	*str_dup;
	int		s_len;

	s_len = ft_strlen(s1);
	str_dup = (char *)malloc((s_len + 1) * sizeof(char));
	if (!s1 || !str_dup)
		return (0);
	ft_strlcpy(str_dup, s1, (s_len + 1));
	return (str_dup);
}
