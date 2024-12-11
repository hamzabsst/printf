/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:14:14 by hbousset          #+#    #+#             */
/*   Updated: 2024/12/11 14:24:59 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putjexx(unsigned int n, char format)
{
	char	*base;
	int		count;
	count = 0;
	if (n == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthex(n / 16, format);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}