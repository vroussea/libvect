/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_mult_scal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:26:16 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 11:26:37 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"

t_vect3d	vect3d_mult_scal(t_vect3d u, double k)
{
	u.x *= k;
	u.y *= k;
	u.z *= k;
	return (u);
}
