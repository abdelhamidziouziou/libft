/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:41 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:40:42 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strncmp() compares bytes of s1 and s2.
**		It returns an integer less than, equal to, or greater than zero if s1
**	(or the first n bytes thereof) is found, respectively, to be less than, to
**	match, or be greater than s2.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((unsigned char)s1[c] == (unsigned char)s2[c]
		&& (unsigned char)s1[c] != '\0' && (unsigned char)s2[c] != '\0')
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
