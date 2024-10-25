/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:13:46 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:10:26 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	const char	*s1 = "Hello, world!";
	const char	*s2 = "Hello";
	size_t	n = 3;
	int	result = ft_strncmp(s1, s2, n);

	if (result == 0)
		printf("The '%d' first letter are the same.\n", n);
	else if (result > 0)
		printf("The first string is mayor.\n");
	else
		printf("The second string is mayor.\n");
	return 0;
}
*/
