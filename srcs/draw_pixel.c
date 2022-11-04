/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_pixel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:41:38 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/03 17:43:40 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_pixel(t_cub *cub, int x, int y, int color)
{
	char	*dst;

	if (x < 0 || x > SCREEN_WIDTH || y < 0 || y > SCREEN_HEIGHT)
		return ;
	dst = cub->img.addr + (y * cub->img.line_length
			+ x * (cub->img.bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	__put_image_to_window(t_program_data *data)
{
	mlx_put_image_to_window(data->cub.mlx, data->cub.win,
		data->cub.img.new_img, 0, 0);
	return (__SUCCESS);
}