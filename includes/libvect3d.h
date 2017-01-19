/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect3d.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:15:05 by vroussea          #+#    #+#             */
/*   Updated: 2017/01/19 15:29:55 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECT3D_H

# define LIBVECT3D_H

typedef struct		s_vect3d
{
	double			x;
	double			y;
	double			z;
}					t_vect3d;

t_vect3d			vect3d_rot_x(t_vect3d u, double ang);
t_vect3d			vect3d_rot_y(t_vect3d u, double ang);
t_vect3d			vect3d_rot_z(t_vect3d u, double ang);

t_vect3d			vect3d_add(t_vect3d u, t_vect3d v);
t_vect3d			vect3d_mult_scal(t_vect3d u, double k);
double				vect3d_scal_prod(t_vect3d u, t_vect3d v);
double				vect3d_ang(t_vect3d u, t_vect3d v);
double				vect3d_norm(t_vect3d u);
t_vect3d			vect3d_fill(double x, double y, double z);
#endif
