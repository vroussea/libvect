/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3d_unit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:16:45 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/31 18:21:57 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect3d.h"

t_vect3d	vect3d_unit(t_vect3d u)
{
	return (vect3d_div_scal(u, vect3d_norm(u)));
}
