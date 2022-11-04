/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_trn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:04:45 by ychibani          #+#    #+#             */
/*   Updated: 2022/07/07 15:06:38 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *void_ptr_trn(int condition, void *success, void *failure)
{
	if (condition)
		return (success);
	return (failure);
}

char    *char_ptr_trn(int condition, char *success, char *failure)
{
	if (condition)
		return (success);
	return (failure);
}

int     *int_ptr_trn(int condition, int *success, int *failure)
{
	if (condition)
		return (success);
	return (failure);
}
