/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:52:28 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 11:31:52 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*ptr;

	len = ft_strlen(s);
	ptr = s + len;
	while (ptr != s)
	{
		ptr--;
		if (*ptr == (unsigned char)c)
		{
			return ((char *)ptr);
		}
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)(s + len));
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	int	c = 'o';
	const char	*s = "Hello, world!";
	const char	*p = ft_strrchr(s, c);

	if (p)
		printf("The last '%c' was found in the position: %ld.\n", c, p - s);
	else
		printf("'%c' was not found in the string.\n", c);
	return 0;
}
*/
