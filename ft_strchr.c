/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:18:21 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/15 21:35:11 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	int	c = 'o';
	const char	*s = "Hello, world!";
	const char	*p = ft_strchr(s, c);

	if (p)
		printf("'%c' was found in the position: %ld.\n", c, p - s);
	else
		printf("'%c' was not found in the string.\n", c);
	return 0;
}
*/
