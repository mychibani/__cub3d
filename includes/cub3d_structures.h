/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_structures.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:18:15 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/01 13:18:34by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_STRUCTURES_H
# define CUB3D_STRUCTURES_H

typedef struct s_img
{
	void	*addr;
	void	*new_img;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	
} t_img;

typedef struct s_cub
{
	void	*win;
	void	*mlx;
	t_img	img;

} t_cub;

typedef struct s_player	
{
	int x;
	int y;
	double angle;
}	t_player;

typedef struct s_line
{
	int				x0;
	int				x1;
	int				y0;
	int				y1;
	unsigned int	color;

}	t_line;

typedef struct s_vars
{
	int	dx;
	int	sx;
	int	sy;
	int	dy;
	int	err;
	int	e2;

}	t_vars;

typedef struct s_program_data
{
	t_cub cub;
	t_player *player;

} t_program_data;

#endif