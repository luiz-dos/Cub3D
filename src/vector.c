/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmiguel <frmiguel@student.42Lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:45:00 by frmiguel          #+#    #+#             */
/*   Updated: 2025/09/13 19:48:00 by frmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vec2f	make_vec2f(float x, float y)
{
	t_vec2f	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}

t_vec2i	make_vec2i(int x, int y)
{
	t_vec2i	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}

t_vec2d	make_vec2d(double x, double y)
{
	t_vec2d	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}
