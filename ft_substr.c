/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:26:48 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/06 17:14:28 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	substr = (char *) malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	slen = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && slen < len)
		{
			substr[slen] = s[i];
			slen++;
		}
		i++;
	}
	substr[slen] = '\0';
	return (substr);
}
/*
int main() 
{
    char input[] = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(input, start, len);
	
    if (substring)
	{
        printf("Substring: %s\n", substring);
        free(substring); //liberar a memória alocada
    } 
	else 
        printf("Erro ao criar a substring\n");
    return 0;
}
*/