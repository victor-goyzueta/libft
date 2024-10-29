/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:24:12 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/24 18:14:58 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (str[i] == (unsigned char) c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int    main()
{
		unsigned char s[] = "Hello, world!";
		unsigned char *p;
		int c = 'e';
		size_t    n = 3;
		
		printf("String:\n%s\n", s);
		printf("'%c' searching in first '%ld' bytes\n", c, n);
		printf("Pointer in 's' is '%p'\n\n", s);
		p = ft_memchr(s, c, n);
		if (p)
			printf("'%c' found in '%p'", c, p);
		else
			printf("'%c' not found in '%s'", c, s);
		return 0;
}
*/
