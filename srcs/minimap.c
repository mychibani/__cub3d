/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:44:40 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/04 11:38:26 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	map[21][20] = {"11111111111111111111",
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
		while (i < 21 && j < 20)
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

/*update lib*/

void	draw_map(t_program_data *data)
{
	int	x;
	int	i;
	int	j;
	int	y;

	y = 0;
	i = 0;
	while (y < 21)
	{
		x = 0;
		j = 0;
		while (x < 20)
		{
			if (map[y][x] == '0' || map[y][x] == 'N')
				draw_square(j, i, BLOCK_SIZE, 0xffffff, &data->cub);
			else if (map[y][x] == '1')
				draw_square(j, i, BLOCK_SIZE, 0xff0000, &data->cub);
			x++;
			j += BLOCK_SIZE;
		}
		i += BLOCK_SIZE;
		y++;
	}
}

void	minimap(t_program_data *data)
{
	data->player = malloc(sizeof(data->player));
	if (!data->player)
		return ;
	init_user_pos(data->player);
	draw_map(data);
	draw_square(data->player->x * BLOCK_SIZE + 32 - 5, data->player->y * BLOCK_SIZE + 32 - 5, 10, 0x00FF00, &data->cub);
	free(data->player);
	__put_image_to_window(data);
}
