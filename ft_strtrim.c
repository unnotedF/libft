/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:56:41 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/06 17:11:38 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tchar;
	size_t	len;
	size_t	beg;
	size_t	end;

	len = 0;
	beg = 0;
	end = 0;
	while (s1[beg] && is_in_set(s1[beg], set))
		beg++;
	if (!s1[beg])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > beg && is_in_set(s1[end], set))
		end--;
	len = end - beg + 1;
	tchar = (char *)malloc(len + 1);
	if (!tchar)
		return (NULL);
	ft_strlcpy(tchar, s1 + beg, len);
	tchar[len] = '\0';
	return (tchar);
}
