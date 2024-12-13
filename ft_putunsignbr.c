/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigndec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:10:01 by hbousset          #+#    #+#             */
/*   Updated: 2024/12/06 15:04:24 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignbr(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb > 9)
	{
		size += ft_putnbr(nb / 10);
		size += ft_putchar((nb % 10) + 48);
	}
	else
		size = size + ft_putchar(nb + 48);
	return (size);
}
