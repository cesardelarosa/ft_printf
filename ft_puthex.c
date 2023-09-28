/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <cde-la-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:57:04 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/28 18:52:14 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(long long n)
{
	char	*str;
	int		len;

	str = ft_itoa_base(n, "0123456789abcdef");
	if (!str)
		return (0);
	len = ft_putstr(str);
	free(str);
	return (len);
}
