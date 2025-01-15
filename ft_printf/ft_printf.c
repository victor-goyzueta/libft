/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:42:47 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/11/11 14:59:17 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	counts_;

	counts_ = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (counts_ += 6);
	}
	while (*str)
	{
		counts_ += ft_putchar(*str);
		str++;
	}
	return (counts_);
}

static int	conver_type(va_list args, char const *format)
{
	int	counts_;

	counts_ = 0;
	if (*format == 'c')
		return (counts_ += ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (counts_ += ft_putstr(va_arg(args, char *)));
	else if (*format == 'p')
		return (counts_ += ft_putptr(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (counts_ += ft_putnbr(va_arg(args, int)));
	else if (*format == 'u')
		return (counts_ += ft_putunsnbr(va_arg(args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
	{
		counts_ += ft_puthex(va_arg(args, unsigned int), *format);
		return (counts_);
	}
	else if (*format == '%')
		return (counts_ += ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		counts;

	counts = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counts += conver_type(args, format);
			if (counts == -1)
			{
				va_end(args);
				return (-1);
			}
		}
		else
			counts += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (counts);
}
