/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:57:10 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/10/20 17:48:26 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s = s + wordlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

static	void	*free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	strs[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, wordlen(s, c));
			if (!strs[i++])
				return (free_strs(strs));
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (strs);
}
/*
#include <stdio.h>

int main()
{
	char const	*s = "Name    Victor Jesus !Last, Goyzueta   ";
	char		c = ' ';
	char		**result = ft_split(s, c);
	unsigned int	i = 0;

	printf("String to split:\n%s\n\n", s);
	printf("Substrings after ft_split:\n");
	if (!result)
		printf("Error allocating memory");
	else
	{
		while(result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
		printf("\n\nComplete. '%d' substrings", i);
	}
	return 0;
}
*/
