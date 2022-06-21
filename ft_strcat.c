/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:31 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:40:33 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strcat() function appends the src string to the dest string,
**	overwriting the terminating null byte ('\0') at the end of dest, and then
**	adds a terminating null byte.  The strings may not overlap, and the dest
**	string must have enough space for the result.
**		It returns a pointer to the resulting string dest.
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size_dest] = src[i];
		i++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
