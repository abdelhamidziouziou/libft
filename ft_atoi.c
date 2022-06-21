/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:30:18 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:30:20 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <stdlib.h>
** DESCRIPTION:
** 		The atoi() function converts the initial portion of the string pointed
**	to by str into integer.
**		Discards whitespace characters (' ' , '\r', '\n', '\f', '\v', '\t') from
**	the beginning of the string
**		Accepts the optional "+" or "-" sign at the beggining of the string.
**		Ignores additional non-numerich characters.
**		Returns 0 for invalid number or no numeric string.
*/

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	unsigned int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '0' && str[i + 1] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '0')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
