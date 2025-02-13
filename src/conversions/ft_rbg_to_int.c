/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbg_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:03:16 by maceccar          #+#    #+#             */
/*   Updated: 2025/02/13 13:03:16 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

// not usigned int because, in case of error,
//	it return -1
int	ft_rgb_to_int(int red, int green, int blue)
{
	int	result;

	if (red < 0 || red > 255)
		return (-1);
	if (green < 0 || green > 255)
		return (-1);
	if (blue < 0 || blue > 255)
		return (-1);
	result = red;
	result = (result << 8) | green;
	result = (result << 8) | blue;
	return (result);
}
