/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:34:42 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:08:33 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int c = ' ';
	int d = '\0';
	int e = '~';

	if (ft_isprint(c))
		printf("%c is a character printable.\n", c);
	else
		printf("%c is not a character printable.\n", c);
	if (ft_isprint(d))
		printf("%c is a character printable.\n", d);
	else
		printf("%c is not a character printable.\n", d);
	if (ft_isprint(e))
		printf("%c is a character printable.\n", e);
	else
		printf("%c is not a character printable.\n", e);
	return 0;
}
*/
