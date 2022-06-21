/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:54:01 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/19 09:18:58 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checker(const char s, va_list lista)
{
	int	len;

	len = 0;
	if (s == '%')
		ft_putchar_ptf('%', &len);
	if (s == 'c')
		ft_putchar_ptf(va_arg(lista, int), &len);
	if (s == 's')
		ft_putstr_ptf(va_arg(lista, char *), &len);
	if (s == 'd' || s == 'i')
		len += ft_put_any_number (va_arg(lista, int), "0123456789", 10);
	if (s == 'u')
		len += ft_putnbr_ptf(va_arg(lista, unsigned int), "0123456789", 10);
	if (s == 'x')
		len += ft_putnbr_ptf(va_arg(lista, unsigned int),
				"0123456789abcdef", 16);
	if (s == 'X')
				len += ft_putnbr_ptf(va_arg(lista, unsigned int),
				"0123456789ABCDEF", 16);
	if (s == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_putnbr_ptf(va_arg(lista, unsigned long),
				"0123456789abcdef", 16);
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	lista;

	i = 0;
	len = 0;
	va_start(lista, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_ptf(str[i], &len);
		if (str[i] == '%')
		{
			len += ft_checker(str[i + 1], lista);
			i++;
		}
		i++;
	}
	va_end(lista);
	return (len);
}
