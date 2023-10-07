/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:41:27 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/07 09:59:25 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
int main()
{
    char test_char = '1';
    int result;
    int result_1;
    result = ft_isalpha(test_char);
    result_1 = ft_isdigit(test_char);
    if (result) {
        printf("%c is an alphabetic character.\n", test_char);
    } else {
        printf("%c is not an alphabetic character.\n", test_char);
    }
    
    // Memcpy
    char src1[] = "Hello, World!";
    char dest1[14];
    size_t n = 13;
    ft_memcpy(dest1, src1, n);
    printf("The copied string is: %s\n", dest1); // Add '\n' here
    
	    // Strrchr.c
    char	txt[] = "procurando Nemo";
	printf("%s\n", ft_strrchr(txt, 'N'));
	return (0);
    
    // Strchr
    const char *str = "Hello, World!";
    int character_to_find = 'o';
    char *result2 = ft_strchr(str, character_to_find);
    if (result2) {
        printf("Found '%c' at position %ld\n", character_to_find, result2 - str);
    } else {
        printf("Character '%c' not found in the string.\n", character_to_find);
    }
    
    // Strlcpy
    char src2[] = "Hello, World!";
    char dest2[20]; // Make sure dest has enough space to accommodate the copied string
    size_t size = sizeof(dest2);
    size_t copied_size = ft_strlcpy(dest2, src2, size);
    printf("Copied string: %s\n", dest2);
    printf("Size of the copied string: %zu\n", copied_size);
    

    // STRTIM
    char str1[] = "Where's Wally?";
    char str2[] = "Wally";
    char *trim = ft_strtrim(str1, str2);
    if (trim)
    {
        printf("%s", trim);
        free(trim); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed or s1 is NULL.\n");
    }
    return 0;

    // SPLIT
    char	strsplit[]= "Test ft_split for libft 42";
	char	**resulta = ft_split(strsplit, ' ');
	int		i;

	i = 0;
	while (resulta[i])
	{
		printf("%s\n", resulta[i]);
		free(resulta[i]);
		i++;
	}
	free(resulta);
	return (0);

// strnstr

const char *strsrc = "Hello, World!";
    const char *to_find = "World";
    size_t len = ft_strlen(str);

    char *results = ft_strnstr(strsrc, to_find, len);

    if (results) {
        printf("Substring encontrada: %s\n", results);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}