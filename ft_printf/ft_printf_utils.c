/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:37:27 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/11/10 16:33:30 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	counts_;

	counts_ = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (counts_ += 11);
	}
	else if (nbr < 0)
	{
		counts_ += ft_putchar('-');
		counts_ += ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		counts_ += ft_putnbr((nbr / 10));
		counts_ += ft_putchar((nbr % 10) + '0');
	}
	else
		counts_ += ft_putchar(nbr + '0');
	return (counts_);
}

int	ft_putunsnbr(unsigned int unsnbr)
{
	int	counts_;

	counts_ = 0;
	if (unsnbr > 9)
	{
		counts_ += ft_putunsnbr((unsnbr / 10));
		counts_ += ft_putchar((unsnbr % 10) + '0');
	}
	else
		counts_ += ft_putchar(unsnbr + '0');
	return (counts_);
}

int	ft_puthex(unsigned long long num, char format)
{
	char	*base;
	int		counts_;

	counts_ = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num == 0 && counts_ == 0)
		return (counts_ += ft_putchar('0'));
	if (num >= 16)
		counts_ += ft_puthex(num / 16, format);
	counts_ += ft_putchar(base[num % 16]);
	return (counts_);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	p;
	int					counts_;

	counts_ = 0;
	p = (unsigned long long)ptr;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (counts_ += 5);
	}
	counts_ += ft_putstr("0x");
	counts_ += ft_puthex(p, 'x');
	return (counts_);
}
