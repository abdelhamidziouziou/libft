/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:42:10 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:42:11 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_utoa_base() function
*/

char	*ft_strrev(char *str)
{
	size_t	size;
	size_t	i;
	char	aux;

	size = ft_strlen(str);
	str[size + 1] = '\0';
	size--;
	i = 0;
	while (i < size)
	{
		aux = str[i];
		str[i] = str[size];
		str[size] = aux;
		i++;
		size--;
	}
	return (str);
}
