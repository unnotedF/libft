/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:32:35 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/29 18:20:08 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main() 
{
    char str[] = "Hello, World!";
    
    printf("Before ft_bzero: %s\n", str);
    
    ft_bzero(str, sizeof(str));
    
    printf("After ft_bzero: %s\n", str);
    
    return 0;
}*/