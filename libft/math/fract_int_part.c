/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_int_part.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:16:23 by ychibani          #+#    #+#             */
/*   Updated: 2022/07/07 15:16:25 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float fractional_part(float x)
{
	if (x > 0)
		return (x - integer_part(x));
	return (x - (integer_part(x) + 1));
}
