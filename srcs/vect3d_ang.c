/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_ang.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 11:28:56 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 14:59:53 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"
#include <math.h>

double	vect3d_ang(t_vect3d u, t_vect3d v)
{
	return (acos(vect3d_scal_prod(u, v) / (vect3d_norm(u) * vect3d_norm(v))));
}
