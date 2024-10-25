/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:25:20 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 18:05:17 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			result;
	int			sign;
	const char	*p;

	result = 0;
	sign = 1;
	p = nptr;
	while ((*p >= 9 && *p <= 13) || *p == 32)
		p++;
	if (*p == '-')
	{
		sign = -1;
		p++;
	}
	else if (*p == '+')
		p++;
	while (*p >= '0' && *p <= '9')
	{
		result = result * 10 + (*p - '0');
		p++;
	}
	return (sign * result);
}
