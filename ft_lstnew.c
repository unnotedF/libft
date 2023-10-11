/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:01:09 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 18:01:47 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list	*dst;

	dst = malloc(sizeof(t_list));
	if (!dst)
		return (NULL);
	if (dst)
	{
		dst->content = content;
		dst->next = NULL;
	}
	return (dst);
}
