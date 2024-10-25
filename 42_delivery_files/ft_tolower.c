/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:46:47 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:09:04 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <stdlib.h>
 
int     main()
{
    int c = 'A';

    if (isalpha(c))
    {
        if (ft_tolower(c))
        {
            printf("%c before ft_tolower.\n", c);
            printf("%c after ft_tolower.\n", ft_tolower(c));
        }
    }
    else
      printf("%c is not a letter.\n", c);
    return 0;
}
*/
