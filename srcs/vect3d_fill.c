/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:50:55 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 15:01:00 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"

t_vect3d	vect3d_fill(double x, double y, double z)
{
	t_vect3d	u;

	u.x = x;
	u.y = y;
	u.z = z;
	return (u);
}
