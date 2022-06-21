/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:38:59 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:39:00 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <math.h>
** DESCRIPTION:
**		The ft_pow() function returns the value of a power applied to a number.
**	An power lower than 0, returns 0.
*/

int	ft_pow(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	else
		result = result * ft_pow(nb, power - 1);
	return (result);
}
