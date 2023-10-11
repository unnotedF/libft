/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:57:53 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 14:40:49 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	allsize;
	void	*pds;

	if (count == 0 || size == 0)
		return (NULL);
	if (SIZE_MAX / count < size)
		return (NULL);
	allsize = size * count;
	pds = malloc(allsize);
	if (!pds)
		return (0);
	ft_memset(pds, 0, allsize);
	return (pds);
}
