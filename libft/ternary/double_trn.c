/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_trn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:18:07 by ychibani          #+#    #+#             */
/*   Updated: 2022/07/07 15:07:01 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double  double_trn(int condition, double success, double failure)
{
	if (condition)
		return (success);
	return (failure);
}
