/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations_vect3d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:16:43 by vroussea          #+#    #+#             */
/*   Updated: 2017/02/02 13:51:05 by vroussea         ###   ########.fr       */
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

t_vect3d	vect3d_rot(t_vect3d u, t_vect3d v, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	u.x = v.x * (cos(ang) + (tmp.x * tmp.x) * (1 - cos(ang))) +
		v.y * (tmp.x * tmp.y * (1 - cos(ang)) - tmp.z * sin(ang)) +
		v.z * (tmp.x * tmp.z * (1 - cos(ang)) + tmp.y * sin(ang));
	u.y = v.x * (tmp.y * tmp.x * (1 - cos(ang)) + tmp.z * sin(ang)) +
		v.y * (cos(ang) + (tmp.y * tmp.y) * (1 - cos(ang))) +
		v.z * (tmp.y * tmp.z * (1 - cos(ang)) - tmp.x * sin(ang));
	u.z = v.x * (tmp.z * tmp.x * (1 - cos(ang)) - tmp.y * sin(ang)) +
		v.y * (tmp.z * tmp.y * (1 - cos(ang)) + tmp.x * sin(ang)) +
		v.z * (cos(ang) + (tmp.z * tmp.z) * (1 - cos(ang)));
	return (u);
}
