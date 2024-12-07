/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:19:31 by hbousset          #+#    #+#             */
/*   Updated: 2024/12/06 15:05:06 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putunsignbr(int nb);


#endif
