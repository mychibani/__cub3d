/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:02:13 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/02 18:22:21 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	*fill_string(int fd)
{
	char	*s;
	char	*buff;
	int		i;

	s = NULL;
	buff = malloc(sizeof(char) * 1);
	i = 1;
	while (i > 0)
	{
		i = read(fd, buff, 1);
		if (i == 0 || __strlen(buff) < 1)
			break ;
		s = __strjoin(s, buff);
	}
	free(buff);
	return (s);
}

void	jump_to_next_elem(char *s, int *len, int *start)
{
	while(s[*len] != '\n')
		*len += 1;
	*len += 1;
	*start = *len;
}

int		elem_compare(char *elem, char *comp1, char *comp2)
{
	if (__strcmp(elem, comp1) == 0 || __strcmp(elem, comp2) == 0)
	{
		printf("element valid : %s\n", elem);
		return (0);
	}
	else
	{
		printf("NON VALID ELEM : %s\n", elem);
		return (1);
	}
}

char *elements_parse(char *s, int len)
{
	char 	*elem;
	int		start;

	start = 0;
	while (s[len] != 'N')
		len++;
	while (s[len] != ' ')
		len++;
	elem = __substr(s, start, len - start);
	if (elem_compare(elem, "NO", "N") == 1)
	{
		printf("GO FUCK YOURSELF");
		return (NULL);
	}
	jump_to_next_elem(s, &len, &start);
	while (s[len] != ' ')
		len++;
	elem = __substr(s, start, len - start);
	return (elem);
}

int	parsing(int ac, char **av)
{
	(void)ac;
	(void)av;
	int		fd;
	char	*map;

	fd = open("./ok_EA_direction.cub", O_RDONLY);
	//printf("%d\n", fd);
	map = fill_string(fd);
	elements_parse(map, 0);
	// printf("%s\n", elements_parse(map, 0));
	return (1);
}

int	main(int ac, char **av)
{
	t_program_data data;

	if (SCREEN_HEIGHT < 0 || SCREEN_WIDTH < 0)
		exit(__FAILURE);
	if (!parameter_analyse(ac, av))
		return (__usage(), __FAILURE);
	else
		if (__init_cub3d(&data) == __FAILURE)
			return (__quit(&data), __FAILURE);
	minimap(&data);
	// if (!parsing(av, &data))
		// return (__FAILURE);
	// if (!init_game(&data))
		// return (__FAILURE);
	// __game_loop(&data);
	mlx_loop(data.cub.mlx);
	return (__SUCCESS);
}
