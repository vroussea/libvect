/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations_vect3d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:16:43 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 16:37:39 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"
#include <math.h>
#include <stdio.h>

t_vect3d	vect3d_rot_x(t_vect3d u, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	printf("x : %f\ny : %f\nz : %f\n", u.x, u.y, u.z);
	u.y = tmp.y * cos(ang) - tmp.z * sin(ang);
	u.z = tmp.z * cos(ang) + tmp.y * sin(ang);
	printf("x : %f\ny : %f\nz : %f\n", u.x, u.y, u.z);
	return (u);
}

t_vect3d	vect3d_rot_y(t_vect3d u, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	printf("x : %f\ny : %f\nz : %f\n", u.x, u.y, u.z);
	u.x = tmp.x * cos(ang) + tmp.z * sin(ang);
	u.z = tmp.z * cos(ang) - tmp.x * sin(ang);
	printf("x : %f\ny : %f\nz : %f\n", u.x, u.y, u.z);
	return (u);
}

t_vect3d	vect3d_rot_z(t_vect3d u, double ang)
{
	t_vect3d	tmp;

	tmp = u;
	printf("x : %f\ny : %f\nz : %f\n", u.x, u.y, u.z);
	u.x = tmp.x * cos(ang) - tmp.y * sin(ang);
	u.y = tmp.y * cos(ang) + tmp.x * sin(ang);
	printf("x : %f\ny : %f\nz : %f\n", u.x, u.y, u.z);
	return (u);
}
