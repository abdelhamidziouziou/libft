/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:43:01 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 01:43:02 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_utoa_base() function
*/

static unsigned int	ft_is_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_utoa_base(unsigned int n, char *base)
{
	unsigned int	base_size;
	int				mod;
	char			*str;
	char			*str_aux;
	char			dig[2];

	base_size = ft_strlen(base);
	if (ft_is_base(base) == 0)
		return (NULL);
	str = NULL;
	if (n == 0)
		str = ft_strdup("0");
	dig[1] = '\0';
	while (n > 0)
	{
		str_aux = str;
		mod = n % base_size;
		dig[0] = base[mod];
		str = ft_strjoin(str, dig);
		free(str_aux);
		n = n / base_size;
	}
	ft_strrev(str);
	return (str);
}
