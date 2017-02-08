/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_dist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 15:35:30 by vroussea          #+#    #+#             */
/*   Updated: 2017/02/08 15:42:04 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"
#include <math.h>

double	vect3d_dist(t_vect3d u, t_vect3d v)
{
	double	val;

	val = sqrt(fabs(pow(v.x - u.x, 2) + pow(v.y - u.y, 2) + pow(v.z - u.z, 2)));
	return (val);
}
