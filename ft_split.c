/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:49:34 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/06 15:06:46 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

#include "libft.h"
/*
static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
*/
static int	count_words(const char *str, char c)
{
	int	i;
	int	ctrl;

	i = 0;
	ctrl = 0;
	while (*str)
	{
		if (*str != c && ctrl == 0)
		{
			ctrl = 1;
			i++;
		}
		else if (*str == c)
			ctrl = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int beg, int end)
{
	char	*pds;
	int		i;

	i = 0;
	pds = malloc((end - beg + 1) * sizeof(char));
	while (beg < end)
	{
		pds[i] = str[beg];
		i++;
		beg++;
	}
	pds[i] = '\0';
	return (pds);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		position;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if ((!s) || (!split))
		return (0);
	i = 0;
	j = 0;
	position = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && position < 0)
			position = i;
		else if ((s[i] == c || i == ft_strlen(s)) && position >= 0)
		{
			split[j] = word_dup(s, position, i);
			j++;
			position = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
/*
int	main(void)
{
	char	str[]= "Test ft_split for libft 42";
	char	**result = ft_split(str, ' ');
	int		i;

	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/