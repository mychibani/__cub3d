/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:11:22 by ychibani          #+#    #+#             */
/*   Updated: 2021/11/22 17:11:30 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	__putstr_fd(s, fd);
	__putchar_fd('\n', fd);
}