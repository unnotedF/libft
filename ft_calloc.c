/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:57:53 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 14:51:31 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}
