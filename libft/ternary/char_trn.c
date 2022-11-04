/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_trn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:01:50 by ychibani          #+#    #+#             */
/*   Updated: 2022/07/07 15:06:50 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	char_trn(int condition, char success, char failure)
{
	if (condition)
		return (success);
	return (failure);
}