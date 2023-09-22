/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:09:30 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/22 11:44:52 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(char const s, int *c)
{
	if (*f == 'c')

	else if (*f == 's')

	else if (*f == 'p')

	else if (*f == 'd')

	else if (*f == 'i')

	else if (*f == 'u')

	else if (*f == 'x')

	else if (*f == 'X')

	else if (*f == '%')

}

int	ft_printf(char const *s, ...)
{
	int		n;
	int		c;

	n = 0;
	while (*s)
	{
		if (*s++ == '%')
			n += format()
		else
		{
			ft_putchar_fd(*(s - 1), 1);
			n++;
		}
	}
	return (n);
}
