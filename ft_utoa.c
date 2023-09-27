/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <cde-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:10:03 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/28 00:03:28 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int n)
{
	int				l;
	unsigned int	num;
	char			*r;

	l = (n == 0);
	num = n;
	while (num)
	{
		l++;
		num /= 10;
	}
	r = (char *)malloc((l + 1) * sizeof(char));
	if (!r)
		return (NULL);
	r[l] = '\0';
	while (l--)
	{
		r[l] = '0' + (n % 10);
		n /= 10;
	}
	return (r);
}
