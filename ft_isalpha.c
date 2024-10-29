/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:33:21 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/14 21:59:44 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int	c = 'd';
	int d = '9';
	int e = '!';
	if (ft_isalpha(c))
		printf("%c is a letter.\n", c);
	else
		printf("%c is not a letter.\n", c);
	if (ft_isalpha(d))
		printf("%c is a letter.\n", d);
	else
		printf("%c is not a letter.\n", d);
	if (ft_isalpha(e))
		printf("%c is a letter.\n", e);
	else
		printf("%c is not a letter.\n", e);
	return 0;
}
*/
