/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:34:46 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/14 22:00:19 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int	d = '9';
	int c = 'c';
	int e = '!';

	if (ft_isdigit(d))
		printf("%c is a digit.\n", d);
	else
		printf("%c is not a digit.\n", d);
	if (ft_isdigit(c))
		printf("%c is a digit.\n", c);
	else
		printf("%c is not a digit.\n", c);
	if (ft_isdigit(e))
		printf("%c is a digit.\n", e);
	else
		printf("%c is not a digit.\n", e);
	return 0;
}
*/
