/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:07:35 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 13:30:57 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	to_copy;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dst[dlen] != '\0' && dlen < size)
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (size <= dlen)
		return (size + slen);
	to_copy = size - dlen -1;
	if (to_copy > slen)
		to_copy = slen;
	while (i < to_copy)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + to_copy] = '\0';
	return (dlen + slen);
}
