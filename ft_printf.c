/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:16:06 by hbousset          #+#    #+#             */
/*   Updated: 2024/12/12 10:10:21 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_format(char specifier, va_list arg)
{
	int	count;

	count = 0;
		if (specifier == 'c')
			count += ft_putchar(va_arg(arg, int));
		else if (specifier == 's')
			count += ft_putstr(va_arg(arg, char *));
		else if (specifier == 'd' || specifier == 'i')
			count += ft_putnbr(va_arg(arg, int));
		else if (specifier == 'u')
			count += ft_putunsignbr(va_arg(arg, unsigned int));
		else if (specifier == 'x' || specifier == 'X')
			count += ft_puthex(va_arg(arg, unsigned int), specifier);
		else if (specifier == 'p')
			ft_putptr(va_arg(arg, void *));
		else if (specifier == '%')
			count += ft_putchar('%');
		return (count);
}
int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	int		i;

	va_start(arg, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			printf_format(format[i + 1], arg);
		}
	}

}
int main()
{
	printf("%s",  "hamza");
}
