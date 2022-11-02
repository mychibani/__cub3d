/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:49:40 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/02 17:15:44 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	__quit(t_program_data *data)
{
	if (data->cub.mlx)
		__free(data->cub.mlx);
	if (data->cub.img.new_img)
		mlx_destroy_image(data->cub.img.new_img, data->cub.win);
	if (data->cub.win)
		mlx_destroy_window(data->cub.mlx, data->cub.win);
}