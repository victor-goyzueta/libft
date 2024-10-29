/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:56:12 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:09:18 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	const char	*c = "Hello, world!";

	printf("%i is lenght of string.\n", ft_strlen(c));
	return 0;
}
*/
