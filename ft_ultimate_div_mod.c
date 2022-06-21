/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:42:56 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:42:58 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
** 		The ft_ultimate_div_mod() function divides parameters a by b. The result
**	of this division is stored in the int pointed by a. The remainder of the
**	division is stored in the int pointed by b.
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;
	if (*b != 0)
	{
		*a = (aux1 / aux2);
		*b = (aux1 % aux2);
	}
}
