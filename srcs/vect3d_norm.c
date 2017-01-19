/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_norm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:08:47 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 16:23:32 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"
#include <math.h>

double	vect3d_norm(t_vect3d u)
{
	return (sqrt(u.x * u.x + u.y * u.y + u.z * u.z));
}
