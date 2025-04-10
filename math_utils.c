/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapachec <gapachec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:45:12 by gapachec          #+#    #+#             */
/*   Updated: 2025/04/10 00:29:39 by gapachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	map(double unscaled_num, t_range ranges)
{
	double	new_range;
	double	old_range;
	double	scaled_value;

	new_range = ranges.new_max - ranges.new_min;
	old_range = ranges.old_max - ranges.old_min;
	scaled_value = (unscaled_num - ranges.old_min) / old_range;
	return ((scaled_value * new_range) + ranges.new_min);
}

t_complex	sum_complex(t_complex z1, t_complex z2)
{
	t_complex	result;

	result.x = z1.x + z2.x;
	result.y = z1.y + z2.y;
	return (result);
}

t_complex	square_complex(t_complex z)
{
	t_complex	result;

	result.x = (z.x * z.x) - (z.y * z.y);
	result.y = 2 * z.x * z.y;
	return (result);
}
