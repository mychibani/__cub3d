/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_fonctions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:09:42 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/02 16:17:33 by ychibani         ###   ########.fr       */
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

int	__init_cub3d(t_program_data *data);

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

#endif