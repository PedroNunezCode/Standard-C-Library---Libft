/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:44:45 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/03 21:03:42 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	if (str)
	{
		while (*str)
			write(fd, (*&str)++, 1);
		write(fd, "\n", 1);
	}
}
