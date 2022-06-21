/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:33:21 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:33:22 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_isnegative() function checks if a number is negative.
*/

int	ft_isnegative(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
