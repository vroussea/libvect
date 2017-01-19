/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations_vect3d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:16:43 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 17:49:18 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"
#include <math.h>

t_vect3d	vect3d_rot_x(t_vect3d u, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	u.y = tmp.y * cos(ang) - tmp.z * sin(ang);
	u.z = tmp.z * cos(ang) + tmp.y * sin(ang);
	return (u);
}

t_vect3d	vect3d_rot_y(t_vect3d u, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	u.x = tmp.x * cos(ang) + tmp.z * sin(ang);
	u.z = tmp.z * cos(ang) - tmp.x * sin(ang);
	return (u);
}

t_vect3d	vect3d_rot_z(t_vect3d u, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	u.x = tmp.x * cos(ang) - tmp.y * sin(ang);
	u.y = tmp.y * cos(ang) + tmp.x * sin(ang);
	return (u);
}
