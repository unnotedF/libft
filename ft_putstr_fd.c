/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:04:51 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 22:11:49 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
	int	main(void)
{
	int	fd = 1; // Use 1 for standard output (stdout)

	ft_putstr_fd("42, ", fd);
	ft_putstr_fd("Common Core!", fd);
	ft_putstr_fd("\n", fd);
	return (0);
}*/