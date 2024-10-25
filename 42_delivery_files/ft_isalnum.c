/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:39:45 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:08:04 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 'c';
	int d = '9';
	int e = '!';

	if (ft_isalnum(c))
		printf("%c is a character alphanumeric.\n", c);
	else
		printf("%c is not a character alphanumeric.\n", c);
	if (ft_isalnum(d))
		printf("%c is a character alphanumeric.\n", d);
	else
		printf("%c is not a character alphanumeric.\n", d);
	if (ft_isalnum(e))
		printf("%c is a character alphanumeric.\n", e);
	else
		printf("%c is not a character alphanumeric.\n", e);
	return 0;
}
*/
