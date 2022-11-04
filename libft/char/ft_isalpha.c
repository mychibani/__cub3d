/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:26:55 by ychibani          #+#    #+#             */
/*   Updated: 2021/11/23 09:16:50 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	__isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
