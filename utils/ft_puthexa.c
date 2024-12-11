/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:14:14 by hbousset          #+#    #+#             */
/*   Updated: 2024/12/11 11:26:54 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int	ft_puthexa(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb < 16)
	{
		if (nb < 10)
			size = size + ft_putchar(nb + '0');
		else
			size = size + ft_putchar(nb - 10 + 'a');
	}
	else
	{
		size = size + ft_puthexa(nb / 16);
		size = size + ft_puthexa(nb % 16);
	}
	return (size);
}
int main()
{
	ft_puthexa(16);
}
