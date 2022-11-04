/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:40:48 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/04 11:38:46 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_line(t_cub *cub, t_line *line)
{
	t_vars	vars;

	vars.dx = (int)float_abs(line->x1 - line->x0);
	vars.dy = -(int)float_abs(line->y1 - line->y0);
	vars.sx = int_trn((line->x1 > line->x0), 1, -1);
	vars.sy = int_trn((line->y1 > line->y0), 1, -1);
	vars.err = vars.dx + vars.dy;
	while (line->x0 != line->x1 && line->y0 != line->y1)
	{
		draw_pixel(cub, line->x0, line->y0, line->color);
		vars.e2 = 2 * vars.err;
		if (vars.e2 >= vars.dy)
		{
			vars.err += vars.dy;
			line->x0 += vars.sx;
		}
		if (vars.e2 <= vars.dy)
		{
			vars.err += vars.dx;
			line->y0 += vars.sy;
		}
	}
}
