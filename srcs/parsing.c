/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:50:13 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/04 11:39:37 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	parameter_analyse(int ac, char **av)
{
	if (ac != 2)
		return (__FALSE);
	if (__strlen(av[1]) < 4
		|| !__strstr(av[1], ".cub")
		|| __strcmp(av[1] + __strlen(av[1]) - 4, ".cub"))
		return (__FALSE);
	return (__TRUE);
}

void	__usage(void)
{
	__putstr_fd("usage : ./cub3d <.cub3d file>\n", 2);
}
