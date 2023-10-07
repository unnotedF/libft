/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:40:51 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 19:29:38 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)src < (size_t)dst)
	{
		while (++i <= len)
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void) 
{
	char	str[] = "Hello, world!";

	ft_memmove(str + 2, str + 7, 5);
	printf("Result: %s\n", str);
	memmove(str + 2, str + 7, 5);
	printf("Result: %s\n", str);
	return (0);
}*/
