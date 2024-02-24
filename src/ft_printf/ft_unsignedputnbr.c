/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedputnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 14/02/2024 01:34:18 by maceccar          #+#    #+#             */
/*   Updated: 24/02/2024 19:46:19 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedputnbr(int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		ln = 4294967296 - ln;
	}
	return (ft_putnbr(ln));
}
