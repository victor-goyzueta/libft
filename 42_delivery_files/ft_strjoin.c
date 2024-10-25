/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:08:15 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/16 19:58:47 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	ls1;
	size_t	ls2;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	s3 = (char *)malloc((ls1 + ls2) + 1);
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, ls1);
	ft_memcpy(s3 + ls1, s2, ls2);
	s3[ls1 + ls2] = '\0';
	return (s3);
}
