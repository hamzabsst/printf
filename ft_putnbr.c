/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:38:05 by hbousset          #+#    #+#             */
/*   Updated: 2024/12/05 09:55:53 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	size;

	size = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nb < 0)
	{
		nb = -nb;
		size = size + write(1, "-", 1);
		size = size + ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		size = size + ft_putnbr(nb / 10);
		size = size + ft_putchar((nb % 10) + 48);
	}
	else
		size = size + ft_putchar(nb + 48);
	return(size);
}
