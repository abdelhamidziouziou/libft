/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:30:55 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:30:56 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	LIBRARY: <stdlib.h>
**	DESCRIPTION:
** 		The calloc() function allocates the requested memory and returns a pointer
**	to it. The difference in malloc and calloc is that malloc does not set the
**	memory to zero where as calloc sets allocated memory to zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (0);
	ft_memset(p, 0, (count * size));
	return (p);
}
