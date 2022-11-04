/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:43:58 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/04 18:40:12 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_square(int x, int y, int cote, int color, t_cub *cub)
{
	int i;
	int	j;

	i = 0;
	while (i < cote - 1)
	{
		j = 0;
		while (j < cote - 1)
		{
 			draw_pixel(cub, x + j, y + i, color);
			j++;
		}
		i++;
	}
}