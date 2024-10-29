/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:41:41 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:08:20 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
	int c = 0;
	int d = 127;
	int e = 128;
	int f = 255;

	if (ft_isascii(c))
		printf("%c is within ASCII values.\n", c);
	else
		printf("%c is outside ASCII values.\n", c);
	if (ft_isascii(d))
		printf("%c is within ASCII values.\n", d);
	else
		printf("%c is outside ASCII values.\n", d);
	if (ft_isascii(e))
		printf("%c is within ASCII values.\n", e);
	else
		printf("%c is outside ASCII values.\n", e);
	if (ft_isascii(f))
		printf("%c is within ASCII values.\n", f);
	else
		printf("%c is outside ASCII values.\n", f);
	return 0;
}
*/
