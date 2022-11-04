/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cub3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:48:44 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/04 12:37:43 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	__init_cub3d(t_program_data *data)
{
	__memset(data, 0, sizeof(data));
	if (__mlx_init(&data->cub) == __FAILURE)
		return (__FAILURE);
	return (1);
}