/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:40:51 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 04:20:43 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (dst);
	if (src < dst)
	{
		while (++i < len)
			((char *)dst)[len - i - 1] = ((char *)src)[len - i - 1];
	}
	else
		ft_memcpy(dst, src, len);
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
