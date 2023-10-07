/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:31:16 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 21:10:22 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char c = 'X';
	int	fd = 1;

	ft_putchar_fd(c, fd);
	return (0);
}
*/