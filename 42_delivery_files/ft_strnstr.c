/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:51:17 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/10 17:23:26 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	blen;
	size_t	llen;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	blen = ft_strlen(big);
	llen = ft_strlen(little);
	if (len > blen)
		len = blen;
	while (len >= llen)
	{
		if (ft_strncmp(big, little, llen) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
