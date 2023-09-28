/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <cde-la-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:47:56 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/28 19:04:07 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(unsigned long long n, const char *base)
{
	int						nbase;
	int						l;
	unsigned long long		tmp;
	char					*r;

	nbase = ft_strlen(base);
	l = (n == 0);
	tmp = n;
	while (tmp)
	{
		l++;
		tmp /= nbase;
	}
	r = (char *)malloc((l + 1) * sizeof(char));
	if (!r)
		return (NULL);
	r[l] = '\0';
	while (l--)
	{
		r[l] = base[n % nbase];
		n /= nbase;
	}
	return (r);
}
