/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:53:05 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 11:32:58 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			b;
	unsigned char	*arr;

	b = 0;
	arr = (unsigned char *)s;
	while (b < n)
	{
		arr[b] = (unsigned char)c;
		b++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	s[] = "Hello, this a test of ft_memset";

	printf("Before ft_memset:%s\n", s);
	ft_memset(s, '!', 10);
	printf("After ft_memset:%s\n", s);
	return 0;
}
*/
