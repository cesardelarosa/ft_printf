/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:09:30 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/28 01:06:06 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putabs(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_puthex(va_arg(args, int)));
	if (format == 'X')
		return (ft_puthex_upper(va_arg(args, int)));
	if (format == '%')
		return (ft_putchar('%'));
	return (ft_putchar(format));
}

int	ft_printf(const char *str, ...)
{
	int		n;
	va_list	args;

	n = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			n += format(*(++str), args);
		else
			n += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (n);
}
