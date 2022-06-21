/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:31:24 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:31:25 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_count_digit() counts how many digits has the integer.
*/

size_t	ft_count_digit(long long int n)
{
	size_t	c;

	if (n == 0)
		return (1);
	c = 0;
	if (n < -9223372036854775807)
	{
		c++;
		n = n / 10;
	}
	if (n < 0)
	{
		n = -n;
		c++;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}
