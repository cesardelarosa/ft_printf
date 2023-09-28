/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <cde-la-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:57:04 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/28 19:03:12 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(long long n)
{
	char				*str;
	int					len;
	unsigned long long	absn;

	len = 0;
	if (n < 0)
		len += ft_putchar('-');
	absn = n * ((n > 0) - (n < 0));
	str = ft_itoa_base(absn, "0123456789ABCDEF");
	if (!str)
		return (0);
	len += ft_putstr(str);
	free(str);
	return (len);
}
