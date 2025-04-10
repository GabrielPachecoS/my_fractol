/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapachec <gapachec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:06:35 by gapachec          #+#    #+#             */
/*   Updated: 2025/04/10 00:07:21 by gapachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_complex	get_complex_coordinate(int x, int y, t_fractal *fractal)
{
	t_complex	coord;
	t_range		range_width;
	t_range		range_height;

	range_width.new_min = -2;
	range_width.new_max = +2;
	range_width.old_min = 0;
	range_width.old_max = WIDTH;
	coord.x = (map(x, range_width) * fractal->zoom) + fractal->shift_x;
	range_height.new_min = +2;
	range_height.new_max = -2;
	range_height.old_min = 0;
	range_height.old_max = HEIGHT;
	coord.y = (map(y, range_height) * fractal->zoom) + fractal->shift_y;
	return (coord);
}
