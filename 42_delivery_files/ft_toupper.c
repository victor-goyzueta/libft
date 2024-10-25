/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:14:37 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/03 16:08:47 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <stdlib.h>
 
int     main()
{
    int c = 'a';

    if (isalpha(c))
    {
        if (ft_toupper(c))
        {
            printf("%c before ft_toupper.\n", c);
            printf("%c after ft_toupper.\n", ft_toupper(c));
        }
    }
    else
      printf("%c is not a letter.\n", c);
    return 0;
}
*/
