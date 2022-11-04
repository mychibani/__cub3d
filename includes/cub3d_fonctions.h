/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_fonctions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:09:42 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/03 17:49:17 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_FONCTIONS_H
# define CUB3D_FONCTIONS_H


/*
**				Mlx
*/

int		__mlx_init(t_cub *cub);

/*
**				Parsing
*/

int		parameter_analyse(int ac, char **av);
void	__usage(void);

/*
**				Init
*/

int		__init_cub3d(t_program_data *data);

/*
**				Parsing
*/

int		parsing(int ac, char **av);

/*
**			Quit
*/

void	__quit(t_program_data *data);

/*
**			Clean
*/

void	__free(void *addr);

/*
**			Raycasting
*/

void	minimap(t_program_data *data);

/*
**			Minimap
*/

void	draw_square(int x, int y, int cote, int color, t_cub *cub);
void	draw_line(t_cub *cub, t_line *line);
void	draw_circle(int x, int y, int r, int color, t_cub *cub);
void	draw_pixel(t_cub *cub, int x, int y, int color);
int		__put_image_to_window(t_program_data *data);

#endif