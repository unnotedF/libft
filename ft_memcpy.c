/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:18:41 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 18:39:56 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
       Standard C library (libc, -lc)

SYNOPSIS
       #include <string.h>

DESCRIPTION
       The  memcpy()  function copies n bytes from memory area src to dst.
*/

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char	src[] = "Source string";
	char	dst[sizeof(src)];

	ft_memcpy(dst, src, sizeof(src));

	printf("Source: %s\n", src);
	printf("Copied: %s\n", dst);
	return 0;
}*/
