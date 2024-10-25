/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:10:07 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:14:48 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;

	arr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (n--)
		*arr++ = 0;
}
/*
#include <stdio.h>
#include <string.h>

int    main()
{
    char    s[] = "Empty, m t";
    size_t  n = 5;
    size_t  i = 0;

    printf("Before ft_bzero:\n%s\n", s);
    ft_bzero(s, n);
    printf("After ft_bzero:\n");
    while (i < n)
    {
      printf("Buffer[%li] is -> %c\n", i, s[i]);
      i++;
    }
    if (s[i] != '\0')
      printf("Rest buffer is:\n%s\n", s + n);
    else
      printf("Rest buffer is NULL");
    return 0;
}
*/
