/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:39:52 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/11 05:26:46 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_ptf(unsigned long n, char *base, unsigned long b_len)
{
	int	len;

	len = 0;
	if (n < b_len)
		len += write(1, &base[n], 1);
	else
	{
		len += ft_putnbr_ptf(n / b_len, base, b_len);
		len += write(1, &base[n % b_len], 1);
	}
	return (len);
}

int	ft_put_any_number(long num, char *base, unsigned long b_len)
{
	int	len;

	len = 0;
	if (num < 0L)
	{
		len += write(1, "-", 1);
		num = num * -1;
	}
	return (len + ft_putnbr_ptf(num, base, b_len));
}
