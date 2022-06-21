/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:26 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:40:27 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
** 		The ft_strcapitalize() function capitalizes the first letter fo each word
**	and transforms all other letters to lowercase.
*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[i + 1] >= 97 && str[i + 1] <= 122)
		{
			if ((str[i] < 48) || (str[i] > 57 && str[i] < 65))
				str[i + 1] = str[i + 1] - 32;
			if ((str[i] > 90 && str[i] < 97) || (str[i] > 122))
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
