/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:27:46 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:15:25 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*d++ = *(const unsigned char *)src++;
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

    printf("Before ft_memcpy:\n");
    printf("Src: %s\n", s);
    printf("Dest:%s\n\n", d);

    ft_memcpy(d, s, strlen(s) + 1);
    printf("After ft_memcpy:\n");
    printf("Src: %s\n", s);
    printf("Dest:%s\n", d);
    return 0;
}
*/