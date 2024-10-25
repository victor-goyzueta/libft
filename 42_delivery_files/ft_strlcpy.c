/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:43:04 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 12:07:56 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		if (src_len >= size)
		{
			copy_len = size - 1;
		}
		else
		{
			copy_len = src_len;
		}
		ft_memcpy (dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return (src_len);
}
