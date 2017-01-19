/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_scal_prod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:49:17 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 14:48:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"

double	vect3d_scal_prod(t_vect3d u, t_vect3d v)
{
	return (u.x * v.x + u.y * v.y + u.z * v.z);
}
