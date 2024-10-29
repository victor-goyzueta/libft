/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:53:21 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 11:35:38 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    main()
{
    char    s[] = "Hello, world!";
    char    d[14] = {0};

    printf("Before ft_memmove:\n");
    printf("Src: %s\n", s);
    printf("Dest: %s\n", d);
    
    printf("After ft_memmove:\n");
    ft_memmove(d, s, strlen(s) + 1);
    printf("Src: %s\n", s);
    printf("Dest: %s\n", d);
    return 0;
}
*/
