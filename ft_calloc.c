/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:57:53 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/06 14:18:19 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	allsize;
	void	*pds;

	allsize = size * count;
	pds = malloc(allsize);
	if (!pds)
		return (0);
	ft_memset(pds, 0, allsize);
	return (pds);
}
