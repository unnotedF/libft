/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:45:21 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 18:15:40 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
       Standard C library (libc, -lc)

SYNOPSIS
       #include <string.h>

       int memcmp(const void s1[.n], const void s2[.n], size_t n);

DESCRIPTION
       The  memcmp()  function compares the first n bytes (each interpreted as
       unsigned char) of the memory areas s1 and s2.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, there!";
    char str3[] = "Hello, world!";
    
    size_t size = sizeof(str1) - 1; // null-terminator
    
    int result1 = ft_memcmp(str1, str2, size);
    printf("Comparison result 1: %d\n", result1);
    
    int result2 = ft_memcmp(str1, str3, size);
    printf("Comparison result 2: %d\n", result2);
    
    int result3 = ft_memcmp(str2, str1, size);
    printf("Comparison result 3: %d\n", result3);
    
    return 0;
}*/