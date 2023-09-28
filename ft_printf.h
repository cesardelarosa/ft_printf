/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:10:38 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/09/28 19:22:16 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_itoa(long long n);
char	*ft_itoa_base(unsigned long long n, const char *base);
char	*ft_utoa(unsigned int n);
int		ft_putchar(const char c);
int		ft_putstr(const char *str);
int		ft_putnbr(long long n);
int		ft_putabs(unsigned int n);
int		ft_puthex(long long n);
int		ft_puthex_upper(long long n);
int		ft_putptr(void *ptr);
int		format(const char format, va_list args);
int		ft_printf(char const *str, ...);

#endif
