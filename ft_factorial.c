/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:31:52 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:31:54 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_factorial() function returns the result of a factorial operation
**	based on the number given as a parameter. If the argument is not valid, it
**	returns 0.
*/

int	ft_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		result = nb * ft_factorial(nb - 1);
	return (result);
}
