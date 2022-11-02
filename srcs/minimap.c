/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:44:40 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/02 18:14:29by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	map[21][20] =	{"11111111111111111111",
						"10000000000000000001",
						"10000000001000000001",
						"10000000001000000001",
						"10000000001000000001",
						"10000000001000000001",
						"10000000001000000001",
						"10000000001000000001",
						"10000000000000000001",
						"10000000000000000001",
						"11111111111000000001",
						"10N00000000000000001",
						"11111111111111111111"};

void	init_user_pos(t_player *player)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[j])
	{
		while(i < 21 && j < 20)
		{
			if (map[j][i] == 'N' || map[j][i] == 'O')
			{
				player->x = i;
				player->y = j;
				return ;
			}
			i++;
		}
		j++;
		i = 0;
	}
}

void	draw_pixel(t_cub *cub, int x, int y, int color)
{
	char	*dst;

	if (x < 0 || x > SCREEN_WIDTH || y < 0 || y > SCREEN_HEIGHT)
		return ;
	dst = cub->img.addr + (y * cub->img.line_length
			+ x * (cub->img.bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	draw_player(t_cub *cub, int x, int y, int color)
{
	int	aire;

	aire = x * y;
	while (y < aire)
	{
		x = y + 1;
		while (x < aire)
		{
			draw_pixel(cub, x, y, color);
			x++;
		}
		y++;
	}
}

void	draw_map(t_program_data *data)
{
	int	x;
	int y;

	y = 0;
	while (y < 1080)
	{
		x = 0;
		while (x < 1920)
		{
			if (map[y / 64][x / 64] == '0')
				draw_pixel(&data->cub, x, y, 0xffffff);
			else if (map[y / 64][x / 64] == 'N')
				draw_pixel(&data->cub, x, y, 0x00ff00);
			else if (map[y / 64][x / 64] == '1')
				draw_pixel(&data->cub, x, y, 0xff0000);
			if (x % 64 == 0 || y % 64 == 0)
				draw_pixel(&data->cub, x, y, 0x000000);
			x++;
		}
		y++;
	}
	draw_player(&data->cub, data->player->x / 64  , data->player->y / 64, 0x0000ff00);
}

int	__put_image_to_window(t_program_data *data)
{
	mlx_put_image_to_window(data->cub.mlx, data->cub.win,
		data->cub.img.new_img, 0, 0);
	return (__SUCCESS);
}

void	minimap(t_program_data *data)
{

	data->player = malloc(sizeof(data->player));
	init_user_pos(data->player);
	printf("user.x == %d\n", data->player->x);
	printf("user.y == %d\n", data->player->y);
	
	draw_map(data);
	__put_image_to_window(data);
		// draw_player(data);
}
